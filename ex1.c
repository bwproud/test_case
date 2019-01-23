#include <stdio.h>
#define PI 3.14159

int main()
{
  int i, n;
  
  printf("Enter a number from 1 to 20:\n");
  scanf("%d", &n);
  if(n > 20 || n < 1){
    printf("Number is not in the range from 1 to 20\n");
    return;
  }
  printf("Here are the first %d ordinal numbers:\n", n);
  for(i=1; i<=n; i++){
    if(i == 1){
      printf("%dst\n", i);
    } else if (i == 2){
      printf("%dnd\n", i);
    } else if (i == 3){
      printf("%drd\n", i);
    } else {
      printf("%dth\n", i);
    }
  }
}
