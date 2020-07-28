#include <stdio.h>
#include "foo.h"
#include "bar.h"

int main(void) {
  int a = 7;
  int b = foo(foo(a));
  printf("%d\n", b);
  bar();
  return 0;
}

