#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    int size = 5; // array size
    
    ptr = (int*)malloc(size * sizeof(int));
    
    if(ptr == NULL) {
        return 1;
    }

    ptr[0] = 10;

    ptr = (int*)realloc(ptr, 10 * sizeof(int));

    ptr[6] = 11;
    ptr[9] = 12;
    printf("%d, %d, %d", ptr[0], ptr[6], ptr[9]);

    free(ptr);

    return 0;
}