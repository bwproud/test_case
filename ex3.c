/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], c;
  char reverse[MAX];
  int length;
  
  puts("Type some text (then ENTER):");
  
  /* Save typed characters in text[]: */
    
  fgets(text, MAX, stdin);

  length = strlen(text) - 1;
  
  for (int j=0; j < length; j++) {
    reverse[j] = text[length - j - 1];
  }
  reverse[length] = '\0';
  puts("Your input in reverse is:");
  printf("%s\n", reverse);

  char rev[MAX], tex[MAX];

  int count = 0;

  for (int j = 0; j < length; j++) {
    if (ispunct(text[j]) || isspace(text[j]) || isblank(text[j])) {
      continue;
    } else if (isalpha(text[j])) {
      tex[count] = tolower( text[j]);
      count++;
    }
  }

  tex[count] = '\0';

  for (int j=0; j<strlen(tex); j++) {
    rev[j] = tex[strlen(tex) - j - 1];
  }
  
  rev[count] = '\0';
  
  if (strcmp(tex, rev) == 0) {
    puts("Found a palindrome!");
  }
}
