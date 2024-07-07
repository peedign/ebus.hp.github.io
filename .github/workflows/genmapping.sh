#!/bin/bash
mapfile=$(realpath "$1")
base=$(realpath "$2/$3")
cd "$base" || exit 1
mf=$(basename "$3")
indent=
path=
if [[ "x$mf" == "x." ]]; then
  mf=""
else
  indent="  "
  path="$mf/"
  echo " - [$mf](https://github.com/john30/ebusd-configuration/tree/master/src/$path)" >> $mapfile
fi

find . -maxdepth 1 -type f -exec basename \{\} \;|egrep -v "_templates|main\.tsp|\.yaml|_inc\.tsp"|egrep "\.tsp"|sort|sed -e "s#^\(.*\)\.tsp\$#$indent - [\1.tsp](https://github.com/john30/ebusd-configuration/tree/master/src/$path\1.tsp) \&rarr; [en: \1.csv](en/$path\1.csv) / [de: \1.csv](de/$path\1.csv)#" >> $mapfile
find . -maxdepth 1 -type f -exec basename \{\} \;|egrep -v "main\.tsp|\.yaml"|egrep "_templates|_inc\.tsp"|sort|sed -e "s#^\(.*\)\$#$indent - [\1](https://github.com/john30/ebusd-configuration/tree/master/src/$path\1) \&rarr; inlined in other file(s)#" >> $mapfile
