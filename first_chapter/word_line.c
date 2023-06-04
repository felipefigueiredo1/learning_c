#include <stdio.h>

void main(void) {
	int c;
	
	while((c = getchar()) != EOF) {
		if(c == ' ') {
			while((c = getchar()) == ' ');
			putchar('\n');

			if (c == EOF) break;
		}
		putchar(c);
	}
}
