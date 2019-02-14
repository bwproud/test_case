/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */

int NchooseK(int n, int k){
  if(k == 0 || k == n){
    return 1;
  }
  return NchooseK(n-1, k-1) + NchooseK(n-1, k);
}

int main()
{
  int n,k;
  do {
    printf("Enter two integers (for n and k) separated by space:\n");
    scanf("%d %d",&n, &k);
    printf("%d\n", NchooseK(n,k));
  } while(n || k);
}
