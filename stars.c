#include <stdio.h>

#define COUNT 10

void main() {
    int i;
    int j;

    for(i = COUNT; i > 0; i--) { 
        if (i % 2 != 0)
            for(j = 0; j < i; j++) 
                 printf("*");
        printf("\n");
    }
}
