#include <sstream>
#include <stdexcept>

#include <libfix/version.hxx>
#include <libfix/fix.hxx>

#undef NDEBUG
#include <cassert>

int main ()
{
  using namespace std;
  using namespace fix;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
