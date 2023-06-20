#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP  20 /* step size */
/* print Fahrenheit-Celsius table */

float convertToCelsius(int fahr);

void main()
{
	int fahr;

	// fahr will jump 20 steps each iteration until came to 300
	printf("Fahrenheit\tCelsius");
	for(fahr = LOWER;fahr <= UPPER;fahr = fahr + STEP ) 
	    printf("%3d\t\t %6.1f \n", fahr, convertToCelsius(fahr));
}   

float convertToCelsius(int fahr) {
	return (5.0/9.0)*(fahr-32);
}