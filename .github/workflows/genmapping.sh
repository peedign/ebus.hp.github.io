#!/bin/bash
mapfile=$(realpath "$1")
base=$(realpath "$2/$4")
cd "$base" || exit 1
branch="$3"
mf=$(basename "$4")
indent=
path=
if [[ "x$mf" == "x." ]]; then
  mf=""
else
  indent="  "
  path="$mf/"
  echo " - [$mf](https://github.com/john30/ebusd-configuration/tree/$branch/src/$path)" >> $mapfile
fi

find . -maxdepth 1 -not -type d -name "*.tsp" -exec basename \{\} \;|egrep -v "_templates|main\.tsp|\.yaml|_inc\.tsp"|sort|sed -e "s#^\(.*\)\.tsp\$#$indent - [\1.tsp](https://github.com/john30/ebusd-configuration/tree/$branch/src/$path\1.tsp) \&rarr; [en: \1.csv](en/$path\1.csv) / [de: \1.csv](de/$path\1.csv)#" >> $mapfile
find . -maxdepth 1 -not -type d -name "*.tsp" -exec basename \{\} \;|egrep -v "main\.tsp|\.yaml"|egrep "_templates|_inc\.tsp"|sort|sed -e "s#^\(.*\)\$#$indent - [\1](https://github.com/john30/ebusd-configuration/tree/$branch/src/$path\1) \&rarr; inlined in other file(s)#" >> $mapfile
