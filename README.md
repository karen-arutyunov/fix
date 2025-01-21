# xsde - XML Schema to C++ data binding compiler for mobile and embedded systems

XSD/e is an open-source, dependency-free XML Schema to C++ compiler for
mobile, embedded, and light-weight applications. It provides XML parsing,
serialization, XML Schema validation and XML data binding while maintaining a
small footprint and portability.

For further information, refer to the [XSD/e project
page](https://codesynthesis.com/products/xsde/).

## Usage

XSD/e consists of several packages with the main ones being `xsde` (the XML
Schema to C++ compiler) and `libxsde` (the runtime library). There are also
`xsde-tests` and `xsde-examples` packages.

When specifying dependencies on the XSD/e packages in your project, the `xsde`
package should be a build-time dependency. The `libxsde` library can be
configured differently depending on your project needs via the
`config.libxsde.*` configuration variables (see `libxsde/build/root.build` for
the available variables).

So, putting it all together, your project's `manifest` would normally
have the following fragment if using the default `libxsde` configuration:

```
depends: * xsde ^3.4.0
depends: libxsde ^3.4.0
```

Or the following fragment if your project prefers `libxsde` to, for example,
use the external Expat library as a dependency instead of the bundled version.

```
depends: * xsde ^3.4.0
depends:
\
libxsde ^3.4.0
{
  prefer
  {
    config.libxsde.external_expat = true
  }

  accept (true)
}
\
```

Then your `buildfile` would have something along these lines:

```
import! [metadata] xsde = xsde%exe{xsde}

import libs = libxsde%lib{xsde}
```

Note that the `xsde` executable provides `build2` metadata.

The compilation of XML Schema to C++ can be implemented using ad hoc recipes
or rules. See the `xsde-examples` package for the complete examples.
