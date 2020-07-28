#include <stdio.h>

int main() {
  char* str = "hello world";
  int i = 0;
  while(str[i++] != '\0') ;
  printf("\nThe number of characters is: %d\n", i);
  return 0;
}
