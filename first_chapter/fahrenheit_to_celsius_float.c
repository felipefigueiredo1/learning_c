#include <stdio.h>

/* print Farhenheit-Celsius table
	for fahr = 0, 20, ..., 300 */
void main() {

	float fahr, celsius;
	float lower, upper, step;

	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	
	fahr = lower;
	
	printf("Farhenheit -- Celsius");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0); 
		printf("%10.0f\t%3.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

}
