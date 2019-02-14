/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */

int main()
{
  char Strings[NUM][LEN];
  char tmp[LEN];

  int i;
  printf("Please enter %d strings, one per line:\n", NUM);

  for(i=0; i<NUM; i++){
  	fgets(Strings[i], LEN, stdin);	
  }
  puts("\nHere are the strings in the order you entered:");
  for(i=0; i<NUM; i++){
  	printf("%s",Strings[i]);
  }

  int swapped = 1;
  while(swapped){
  	swapped=0;
	for(i = 0; i < NUM-1; i++){
		if(strcmp(Strings[i], Strings[i+1])>0){
			swapped = 1;
      strcpy(tmp, Strings[i]);
      strcpy(Strings[i], Strings[i+1]);
      strcpy(Strings[i+1], tmp);
		}
	}
  }
  
  
  
  puts("\nIn alphabetical order, the strings are:");     
  for(i=0; i<NUM; i++){
        printf("%s",Strings[i]);
  }
}
