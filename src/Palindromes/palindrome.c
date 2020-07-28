#include <stdio.h>
#include <string.h>

// This file finds palindromes
char* reverse(char* s){
  //add code here
  char new[strlen(s)];
  strcpy(new, s);
  
  int j = 0;
  for(int i = strlen(s) - 1; i >= 0; i--) {
    s[j++] = new[i];
  }
  
  return s;
}


int main(){
  char s[100];
  char new[strlen(s)];
  
  FILE *fp = fopen("words.txt", "r");
  while(fgets(s, 100, fp) != NULL) {
    s[strlen(s) - 1] = 0;
    strcpy(new, s);
    char* s2 = reverse(s);
    
    // printf("%s\n", new);
    //printf("%s\n", s2);
    // printf("Are input and output the same: %d\n", strcmp(new, s2));
    if(strcmp(new, s2) == 0) {
      printf("%s is a palindrome\n", s);
    }
  }  
  return 0;
    //printf("type a string\n");
    //fscanf(stdin, "%s", s);
    //printf("input = %s\n", s);
    //printf("output = %s\n", reverse(s));
}
