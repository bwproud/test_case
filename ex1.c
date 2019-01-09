#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a;

  printf("Enter radius (in cm):\n");
  scanf("%f", &r);

  a = (PI * r * r)/6.4516;

  printf("Circle's area is %3.2f (sq in).\n", a);
}
