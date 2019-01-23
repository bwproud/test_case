#include <stdio.h>
#define PI 3.14159

int main()
{
  float a, sum=0, min, max, product=1;
  int d;

  printf("Enter five floating-point numbers:\n");
  for(d=0; d<5; d++){
    scanf("%f", &a);
    if(!d){
      max=min=a;
    }
    sum+=a;
    product*=a;
    if(a < min){
      min = a;
    }
    if(a > max){
      max = a;
    }
  }
 
  printf("Sum is %.4f\n", sum);
  printf("Min is %.4f\n", min);
  printf("Max is %.4f\n", max);
  printf("Product is %.4f\n", product);
}
