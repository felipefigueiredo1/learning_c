#include <stdio.h>

void main(void)
{
	int x = 10;
	int *pX = &x; // pointer of  address memory of x
	int y = *pX; // value of address pointer
	
	printf("%d", pX);
	printf("%d", y);



}
