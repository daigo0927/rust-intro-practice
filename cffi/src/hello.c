#include <stdio.h>

typedef unsigned int uint;

void c_hello() {
  printf("Hello, world from C!\n");
}

uint c_fib(uint n) {
  uint i;
  uint t0 = 0, t1 = 1;
  if (n == 0) {
    return t0;
  } else if (n == 1) {
    return t1;
  } else {
    for (i = 2; i <= n; i++) {
      t1 = t0 + t1;
      t0 = t1 - t0;
    }
    return t1;
  }
}
