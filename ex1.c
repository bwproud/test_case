/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */


int my_compare_strings(char s1[], char s2[]) {
  int i;
  for(i = 0; i < LEN; i++){
	if(s1[i]=='\0' && s2[i]=='\0'){
		return 0;
	} else if(s1[i]=='\0'){
		return -1;
	} else if(s2[i]=='\0'){
        	return 1;
	}	

  	if(s1[i]<s2[i]){
		return -1;
	} else if(s1[i] > s2[i]){
		return 1;
	}
  }
  return 0;
}


void my_swap_strings(char s1[], char s2[]) {
  char temp;    // char variable used in swapping one character at a time
  int i, j;
  for(i = 0; i < LEN; i++){
  	if(s1[i]=='\0' && s2[i]=='\0'){
      return;
    } else if(s1[i]=='\0'){
      j=i;
  		while(s2[j]){
  			s1[j] = s2[j];
  			j++;
  		}
      s1[j] = '\0';
  		s2[i] = '\0';
		  break;
    } else if(s2[i]=='\0'){
      j=i;
      // printf("%s %s\n", s1, s2);
      while(s1[j]){
        // printf("BEFORE %s %s\n", s1, s2);
        // temp = s1[j];
        s2[j] =  s1[j];
        // s2[j+1] = '\0';
        // printf("AFTER %s %s\n", s1, s2);
      	j++;
		  }
      s2[j] = '\0';
      s1[i] = '\0';
      // printf("%s %s\n", s1, s2);
		  break;
    }
  	temp = s1[i];
  	s1[i] = s2[i];
  	s2[i] = temp;
  }
}


int main()
{
  char Strings[NUM][LEN];
  char tmp[LEN];
  // char cmp1[] = "Timothy L. Quigg";
  // char cmp2[] = "Office: SN 104";
  // printf("(%s, %s)\n", cmp1, cmp2);
  // my_swap_strings(cmp1, cmp2);
  // printf("(%s, %s)\n", cmp1, cmp2);
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
		if(my_compare_strings(Strings[i], Strings[i+1])>0){
			swapped = 1;
			my_swap_strings(Strings[i], Strings[i+1]);
		}
	}
  }
  
  
  
  puts("\nIn alphabetical order, the strings are:");     
  for(i=0; i<NUM; i++){
        printf("%s",Strings[i]);
  }
}
