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