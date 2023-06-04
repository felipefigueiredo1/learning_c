#include <stdio.h>


void main(void)
{
    int c, length, i;

    while((c = getchar()) != EOF) 
        if(c != '\n' && c != '\t' && c != ' ')
            length++;

    printf("Length: %d", length);
    for(i = 0; i < length; i++) {
        printf("_\n");
    }
}