#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP  20 /* step size */
/* print Fahrenheit-Celsius table */

void convertToFahr(int fahr);

void main()
{
	int fahr;

	// fahr will jump 20 steps each iteration until came to 300
	printf("Fahrenheit\tCelsius");
    convertToFahr(fahr);
}   

void convertToFahr(int fahr) {
    for(fahr = LOWER;fahr <= UPPER;fahr = fahr + STEP ) 
		printf("%3d\t\t %6.1f \n", fahr, (5.0/9.0)*(fahr-32)); // this shit do a computed convertion of fahr to celsius
}