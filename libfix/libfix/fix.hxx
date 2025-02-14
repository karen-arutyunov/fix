#pragma once

#include <iosfwd>
#include <string>

#include <libfix/export.hxx>

namespace fix
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBFIX_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
