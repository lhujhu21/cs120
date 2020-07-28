#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char text[100];
  int numLines = 0;
  int numWords = 0;
  int numChar = 0;
  
  // Take in user text, each line is a new string
  printf("Please enter text, end with [CTRL]-d: \n");
  while(1) {
    text[numChar++] = getchar();
  }
    int wordAdded = 0;
    int nonSpace = 0;
        
    // Find the first non-space char
    int j;
    for(j = 0; j < strlen(text); j++) {
      if(!isspace(text[j])) {
	nonSpace = 1;
	break;
      }
    }
    // Search for spaces after first non-space
    // Double-check prev char is non-space before incrementing numWords
    for(j; j < strlen(text); j++) {
      if(isspace(text[j]) && !isspace(text[j-1])) {
	numWords++;
	wordAdded = 1;
      }
    }
    if(nonSpace != 0 && wordAdded == 0) {
      numWords++;
    }
  printf("\nlines: %d char: %d words: %d\n", numLines, numChar, numWords);
  return 0;
}
