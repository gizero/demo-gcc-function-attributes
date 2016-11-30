#include <stdio.h>

#include "lib.h"

#ifdef OVERRIDE_FOO
int foo(void) {
  return 1;
}
#endif

int main(void) {
  printf("foo was%soverriden.\n", foo() ? " " : " not ");

  return 0;
}
