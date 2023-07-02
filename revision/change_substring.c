#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[] = "Anderson Gabino";
    char str2[] = "Gabino";
    char str3[] = "Validios";

    // Localizar a primeira ocorrência de str2 em str1
    char* found = strstr(str1, str2);

    if (found) {
        // Obter o índice onde str2 começa em str1
        int index = found - str1;

        // Copiar str3 para a posição onde str2 foi encontrada
        strcpy(str1 + index, str3);
    }

    printf("name: %s\n", str1);

    int i = 0;

    while(str1[i] != "\0") {
        printf("%c", str1[i]);
        i++;
    } 

    return 0;
}


