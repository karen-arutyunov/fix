# libfix - A C++ library

The `libfix` C++ library provides <SUMMARY-OF-FUNCTIONALITY>.


## Usage

To start using `libfix` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libfix ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = libfix%lib{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
lib{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libfix.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
