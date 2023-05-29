#include <stdio.h>

void main(void)
{
	int c, nl =0, bl = 0, t = 0;
	while((c = getchar()) != EOF){
		if(c == '\n')
			nl++;
		if(c == ' ')
			bl++;
		if(c == '\t')
			t++;
	}
	printf("New lines: %d\n", nl);
	printf("Blanks:    %d\n", bl);
	printf("Tabs:      %d\n", t);
}			

