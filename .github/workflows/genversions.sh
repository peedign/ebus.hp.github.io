#!/bin/bash
dir=$(dirname "$0")
dir=$(realpath "$dir")
srcdir=$(realpath "$1")

(cd "$1" && find . -name "*.csv" | xargs node $dir/genversions.mjs -i "$srcdir/versions.json") > "$1/versions.json.new" && mv "$1/versions.json.new" "$1/versions.json"
