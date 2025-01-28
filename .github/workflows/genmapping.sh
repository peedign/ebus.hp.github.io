#!/bin/bash -x
mapfile=$(realpath "$1")
base=$(realpath "$2/$4")
cd "$base" || exit 1
ref="$3"
mf=$(basename "$4")
indent=
path=
urlprefix="https://github.com/john30/ebusd-configuration/blob/$ref/src/"
if [[ "x$mf" == "x." ]]; then
  mf=""
else
  indent="  "
  path="$mf/"
  urlprefix="$urlprefix$path"
  echo " - [$mf]($urlprefix)" >> $mapfile
fi
for file in $(find . -maxdepth 1 -not -type d -name "*.tsp" -exec basename \{\} \;|egrep -v "_templates|main\.tsp|_inc\.tsp"|sort); do
  echo $file|sed -e "s#^\(.*\)\.tsp\$#$indent - [\1.tsp]($urlprefix\1.tsp) \&rarr; [en: \1.csv](en/$path\1.csv) / [de: \1.csv](de/$path\1.csv)#" >> $mapfile
done
find . -maxdepth 1 -not -type d -name "*.tsp" -not -name "_templates.tsp" -exec basename \{\} \;|egrep -v "main\.tsp"|egrep "_inc\.tsp"|sort|sed -e "s#^\(.*\)\$#$indent - [\1]($urlprefix\1) \&rarr; inlined in/loaded by other file(s)#" >> $mapfile
find . -maxdepth 1 -not -type d -name "_templates.tsp" -exec basename \{\} \;|sed -e "s#^\(.*\)\$#$indent - [\1]($urlprefix\1) \&rarr; inlined in other file(s)#" >> $mapfile
