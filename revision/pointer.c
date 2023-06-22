#include <stdio.h>

int main(){
	int x = 10;
	int *y = &x;

	printf("%d, %p", *y, y);
}
