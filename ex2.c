#include <stdio.h>
#define PI 3.14159

int main()
{
  double a, sum=0, min, max, product=1;
  int d;

  printf("Enter 10 floating-point numbers:\n");
  for(d=0; d<10; d++){
    scanf("%lf", &a);
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
 
  printf("Sum is %.5lf\n", sum);
  printf("Min is %.5lf\n", min);
  printf("Max is %.5lf\n", max);
  printf("Product is %.5lf\n", product);
}
