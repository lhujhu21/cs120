#include <stdio.h>

int main(int argc, char* argv[]) {
  if (argc <= 1){
    fprintf(stdout, "need an arg!\n");
    printf("need an arg!!\n");
    fprintf(stderr, "need an arg!!!\n");
  } else {
    printf("I see an argument %s\n", argv[1]);
  }
  return 0;
}
