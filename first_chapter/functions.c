#include <stdio.h>

int power(int base, int n);
int power_2(int base, int n);

int main()
{
    int i;

    for(i = 0;i < 10;i++) 
        printf("%d %d %d\n", i, power_2(2,i), power_2(-3, 1));
    
    return 0;
}

int power(int base, int n) {
    int i, p;

    p = 1;

    for(i = 1; i <= n; ++i) 
        p = p * base;

    return p;
}

/*the n variable is modified but in C args to function just pass the value not the reference of the variable*/
/*when the for do --n , it will do just for the local n and not the external variable*/
int power_2(int base, int n) {
    int p = 1;

    for(p; n > 0; --n) 
        p = p * base;
    
    return p;
}