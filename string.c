#include <stdio.h>

int main() {
    char nome[20];  // Declaração de um array de caracteres com tamanho 20
    
    printf("Digite seu nome: ");
    scanf("%s", nome);  // Lê o nome digitado pelo usuário e o armazena na matriz
    
    printf("Seu nome é: %s\n", nome);  // Imprime o nome
    
    return 0;
}
