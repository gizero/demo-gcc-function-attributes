#include "lib.h"

#ifdef __GNUC__
#define __weak  __attribute__((weak))
#endif

__weak int foo(void) {
  return 0;
}
