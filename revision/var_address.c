#include <stdio.h>

int main(void) {
	long i;
	i = 10;
	
	printf("%ld bytes \n", sizeof(i));

	int a = 10;
	int b, c;

	b = 20;

	c = a + b;

	printf("Values a: %d, b: %d, c: %d\n", a, b, c);
	printf("Address a: %p, b: %p, c: %p", &a, &b, &c);

	return 0;
}
