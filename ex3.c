/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], c;
  int i, end;
  int p=1;
  int length;
  
  puts("Type some text (then ENTER):");
  
  /* Save typed characters in text[]: */
    
  fgets(text, MAX, stdin);
  length = strlen(text)-1;
  
  /* Analyse contents of text[]: */
  
  for (i = 0, end = length-1; i < length/2; i++, end--) {
    c = text[i];
    text[i] =  text[end];
    text[end] = c;
  }

  for (i = 0, end = length-1; i < length/2; i++, end--) {
    printf("comparing %c with %c\n", text[i], text[end]);
    if(!isalpha(text[i])){
      end++;
      continue;
    }
    if(!isalpha(text[end])){
      i--;
      continue;
    }
    if(toupper(text[i]) != toupper(text[end])){
      p = 0;
    }
  }
  
  
  printf("Your input in reverse is:\n%s", text);
  if (p) {
    printf("Found a palindrome!\n");
  }
}
