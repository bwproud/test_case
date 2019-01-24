#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
  int d=-1, t;
  printf("Number ?\n");
  scanf("%d", &d);
  while(d){
    t = (sqrt(d*8+1)-1)/2;
    t = (t * (t+1))/2;
    if(d == t){
      printf("%d is a triangular number\n", t);
    } else {
      printf("%d is not triangular, nearest triangular number below %d is %d\n", d, d, t);  
    }
    printf("Number ?\n");
    scanf("%d", &d);
  }
  printf("Done\n");
}
