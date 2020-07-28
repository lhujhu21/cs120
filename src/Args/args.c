#include <stdio.h>

int main(int argc, const char* argv[]) {
  printf("the number of arguments is %d\n", argc);
  for(int i = 0; i < argc; i++) {
    printf("argument %d = %s\n", i, argv[i]);
  }

}
