#include <stdio.h>
#define PI 3.14159

int main()
{
  int i, n;
  
  printf("Please enter a number from 1 to 5:\n");
  scanf("%d", &n);
  
  for(i=1; i<=n; i++){
    printf("%d Hello World\n", i);
  }
}
