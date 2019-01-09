#include <stdio.h>
#define PI 3.14159

int main()
{
  float r=-1, a, c;
  while(r){
     printf("Enter radius (in cm):\n");
     scanf("%f", &r);
     r /= 2.54; 
     a = PI * r * r;
     c = 2 * PI * r * 2;
     printf("Circle's area is %3.2f (sq in).\n", a);
     printf("Its circumference is %3.2f (in).\n", c);
  }
}
