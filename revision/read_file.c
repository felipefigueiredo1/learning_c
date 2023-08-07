#include <stdio.h>

int main(void) {
    // ponteiro de constante para arquivos
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    
    char myString[100];
    
    if(fptr == NULL) {  
        printf("Not able to open the file!");
        return 1;
    } 

    // cria a estrutura de ponteiro para ponteiros do tipo char
    char **lines = NULL;
    char buffer[100];
    int numLines = 0;

    while(fgets(buffer, sizeof(buffer), fptr)) {
            // Alocar memória para armazenar a linha atual do fgets
            // A cada loop o ponteiro line cria o espaço de memoria necessario para cada linha que fgets traz
            // line irá apontar para o primeiro caracter desse array de caracteres e ao usar %s, irá printar ele todo.
            char *line = malloc(strlen(buffer) + 1);

            if(line == NULL) {
                printf("Erro de alocação de memória \n");
                return 1;
            }

            // Copia a linha para a memoria alocada
            strcpy(line, buffer);

            // Realoca o tamanho do array de ponteiros para ponteiros para char
            // realloc pega o tamanho atual que foi espacionado para o ponteiro lines e aumenta ele conforme a quantidade de linhas 
            lines = realloc(lines, (numLines + 1) * sizeof(char*));

            if(lines == NULL) {
                printf("Erro de alocação de memória \n");
                return 1;
            }

            // Armazena o ponteiro da linha no array de ponteiros para char
            lines[numLines] = line;

            printf("lines lines %c", lines[0][0]);

            // cada valor no array lines é um ponteiro para um array de caracteres representado pela variavel line a cada iteração
            numLines++;
    }
    
    fclose(fptr);

    // Imprimindo as linhas 
    for(int i = 0; i < numLines; i++) {
        printf("%s", lines[i]);

        // Liberar memoria alocada para cada linha
        free(lines[i]);
    }
    // Liberar a memória alocada para o array de ponteiros
    free(lines);

    return 0;
}