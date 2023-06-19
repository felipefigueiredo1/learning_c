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
            wordlength[nw] = length++ + 1;
        } else {
            wordlength[nw] = length++ + 1;
            if(longestwrd < length) longestwrd = wordlength[nw];
        }

    for (int i = 0; i < 64; ++i)  // "bubble sort"
        for (int j = i + 1; j < 64; ++j) 
            if (wordlength[i] < wordlength[j]) {
                int temp        = wordlength[i];
                wordlength[i]   = wordlength[j];
                wordlength[j]   = temp;
            }
        

    for(i = 0; i < 64; i++) {
        if(wordlength[i] != 0) {
            for(j = 0; j <= (wordlength[i] - 1); j++) printf("* ");
            
            printf("\n");
        }
    }    
    
    for(i = longestwrd; i >= 0; i--) {
        for(j = 0; j < 64; ++j) 
            if(wordlength[j] > i)
                printf("* ");
        printf("\n");   
    }
    
    for(i = longestwrd; i >= 0; i--)    
        if(i !=0)
            printf("%d ", i);

    // TODO: print vertically, tip: start by longestwrd
    printf("\nMaior palavra teve %d letras", longestwrd);

}
