#include <stdio.h>

#define IN 1
#define OUT 0

void main(void)
{
    int c;
    int length = 0, nw = 0, longestwrd = 0, longestwordArr = 0;
    int state;
    int i, j;
    int wordlength[64];

    for(i = 0; i < 64;i++)
        wordlength[i] = 0;

    while((c = getchar()) != EOF)
        if(c == '\n' || c == '\t' || c == ' ') {
            state = OUT;
            length = 0;
        } else if (state == OUT) {
            state = IN;
            nw++;
            length++;
        } else {
            wordlength[nw] = length++;
            if(longestwrd < length) longestwrd = wordlength[nw];
        }
    

    for(i = 0; i < 64; i++) {
        if(wordlength[i] != 0) {
            for(j = 0; j <= (wordlength[i]); j++) printf("*");
            
            printf("\t");
        }
    }
    // TODO: print vertically, tip: start by longestwrd
    printf("Maior palavra teve %d letras", longestwrd + 1);

}
