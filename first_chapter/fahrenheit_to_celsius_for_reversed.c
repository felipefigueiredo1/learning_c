#include <stdio.h>

/* print Fahrenheit-Celsius reversed */

void main()
{
	int fahr;
	for(fahr = 300;fahr >= 0; fahr = fahr - 20) {
		printf("%3d\t\t %6.1f \n", fahr, (5.0/9.0)*(fahr-32)); // this shit do a computed convertion of fahr to celsius
	} 
}
