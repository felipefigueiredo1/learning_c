#include <stdio.h>

void main(void)
{
	int c, chars;

	while((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\'); // two blackhash to represent a special character 
			putchar('t'); // and will reproduce = '\t'
		}
		
		if (c == '\n') {
			putchar('\\');
			putchar('n');
		}

		if (c == '\b') {
			putchar('\\');
			putchar('b');
		}

		if (c == '\\') {
			putchar('\\');
		}
	}
}
