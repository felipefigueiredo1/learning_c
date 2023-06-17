#include <stdio.h>

void main()
{
	int x 	= 10;
	int *pX = &x; // pointer of  address memory of x
	int y  	= *pX;// value of address pointer
	int z;

	printf("%p\n", &x); //address of x
	printf("%p\n", pX); //address of x
	*pX = *pX + 10;
	printf("%d\n", *pX);//value of x
	printf("%d\n", x);    //value of x

	z = (10 * 20 + 30) / 2 * 30;

	printf("Res: %10.d", z);
}
