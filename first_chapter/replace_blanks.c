#include <stdio.h>

void main(void)
{
	int c, chars;
	
	while((c = getchar()) != EOF) {
		if (c == ' ') { // find a blank char
			while((c = getchar()) == ' '); // loop all subsequents blanks char , ( threat getchar() as a pointer of the stdinput of the user )
			putchar(' '); // and after all put one blank char
			if ( c == EOF ) break;
		}

		putchar(c); // put others chars
	}
}
