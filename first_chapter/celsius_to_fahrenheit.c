#include <stdio.h>

int main(void) {

	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;

	printf("Celsius -- Farhenheit");

	while(celsius <= upper) {	
		fahr = (celsius * 1.8)  + 32;
		printf("%7.0f\t%13.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}
