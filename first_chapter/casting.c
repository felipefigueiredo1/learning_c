#include <stdio.h>

void main() {
    float x = 32.2423;
    int   y = 20;
    float z = (float)(y / (int)x); // casting convertion, int z => float y;, in this case the () around the operation will be set first than (float)
                                     // so, the result will be 0.00
    printf("%.2f\n", z);
    printf("%d", (int)x - y); // casting convertion, float x => int x
}