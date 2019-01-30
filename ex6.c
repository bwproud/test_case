/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>

int main()
{
  int n;
  // add your code below
  printf("Please enter the starting number of the Collatz sequence:\n");
  scanf("%d", &n);
  while(n != 1){
    printf("%d, ", n);
    if(n%2){
      n = 3*n + 1;
    } else {
      n = n/2;
    }
  }
  printf("%d\n", n);
}
