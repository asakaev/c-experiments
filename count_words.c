// 1. program to read a sentence of text from the user, character by character
// 2. count the number of words in that sentence 
// 3. if there are more than one consecutive spaces then ignore them
// 4. terminate when the end of a sentence is reached (denoted by a period ’.’).
// 5. print the final number of words encountered.
// 6. ignore anything that is not a letter so it will count only the words.
// Hint: It might be a good idea to use the numerical values from the ASCII table.


#include <stdio.h>

int main() {
  int words = 0;
  char c;
  
  char prevIsLetter = 0;
  char currentIsLetter = 0;

  printf("Enter a Sentence : \n");

  while (c != '.') {
    c = getchar();

    currentIsLetter = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');

    if (prevIsLetter && !currentIsLetter) {
      words++;
    }
    
    prevIsLetter = currentIsLetter ? 1 : 0;
  }

  printf("Total number of words: %d\n", words);
}