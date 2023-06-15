#include <stdio.h>

int getNumber(int y);

void main() {
    int y = 10;
    int x;

    printf("Digite o numero: ");
    scanf(" %d", &x);
    printf("Resultado da multiplicação %d", getNumber(x));
}

int getNumber(int y) {
    return y * 10;
}