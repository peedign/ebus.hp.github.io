#!/bin/bash
cd "$1" && (ls *.csv|tr -d "\r"|tr "\n" "#"|sed -e 's/#$//' -e 's/#/\\n/g' -e 's#^#"#' -e 's#$#"#') > index.json
