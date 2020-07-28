#include <stdio.h>
#include <string.h>

int main(void){
  char line[128], name[128];
  int age;

  printf("Please enter your name and age: ");
  fgets(line, sizeof(line), stdin);

  if(strlen(line) == sizeof(line) - 1) {
    printf("Input is too big\n");
  } else if(sscanf(line, "%s %d", name, &age) != 2) {
    printf("Failed to read input\n");
  } else{
    printf("name: %s, age: %d|\n", name, age);
  }
  return 0;
}
