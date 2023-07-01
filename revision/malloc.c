 #include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = (char*)malloc(2 * sizeof(char)); // array of char with 2 positions
    str[0] = 'a';
    str[1] = 'b';
    
    printf("%lu\n", sizeof(str)); // size
    printf("%p\n", str); // address

    //values
    printf("%c\n", str[0]);
    printf("%c\n", str[1]);
    return 0;
}