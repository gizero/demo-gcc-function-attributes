#include "lib.h"

#ifdef OVERRIDE_FOO
int foo(void) {
  return 1;
}
#endif

int main(void) {
  return foo();
}
