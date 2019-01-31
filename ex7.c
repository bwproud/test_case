#include<stdio.h>

int main(void){

int x=10,y,z;
int *p=&x 

        printf("\n\np  = %u\n",p);
        printf("\n*p = %u\n",*p);
        printf("\n&x = %u\n",&x);
        printf("\n&y = %u\n",&y);
        printf("\n&z = %u\n",&z);
        printf("\n&p = %u\n\n",&p);
	return 0;
}
