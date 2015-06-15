#include <stdio.h>

int main() {
  int words = 0;
  char c;
  
  char prevIsLetter = 0;
  char currentIsLetter = 0;

  printf("Enter a Sentence : \n");

  while (c != '.') {
    c = getchar();

    currentIsLetter = (c >= 65 && c <= 90) || (c >= 97 && c <= 122);

    if (prevIsLetter && !currentIsLetter) {
      words++;
    }
    
    if (currentIsLetter) {
      prevIsLetter = 1;
    } else {
      prevIsLetter = 0;
    }
  }

  printf("Total number of words: %d\n", words);
}