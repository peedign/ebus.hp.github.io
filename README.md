# Description
This is a service providing configuration files for [ebusd](https://github.com/john30/ebusd) on [a github pages](https://ebus.github.io/) and/or CDN basis to address the increasing demand for those.

The CSV files currently consumed by [ebusd](https://github.com/john30/ebusd) are generated from TypeSpec source files found in the [`src` folder of ebusd-configuration](https://github.com/john30/ebusd-configuration/tree/master/src) and converted to CSV using the [eBUS TypeSpec library](https://github.com/john30/ebus-typespec). The conversion process is described there in detail.

The source files are taken from the commit associated with the submodule [ebusd-configuration](ebusd-configuration) here and the mapping from those to the generated CSV files is also re-generated with each update and [documented here](mapping.md).

Take a look in the [`next/` folder](next/) for using the next upcoming release of the main folder.
