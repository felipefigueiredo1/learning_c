#include <stdio.h>

void main()
{
	int c;
	while ((c = getchar()) != EOF) // get input if is different to end of the file
		putchar(c); // print c variable which contains input
	
}
