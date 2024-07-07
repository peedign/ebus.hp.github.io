#!/bin/bash
dir=$(dirname "$0")
dir=$(realpath "$dir")

(cd "$1" && find . -name "*.csv" | xargs node $dir/genversions.mjs) > "$1/versions.json"
