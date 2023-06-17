#include <stdio.h>
#include <stdlib.h>

// ORDENAÇÃO ASC, ACRESCENTE
void ordenar(int *vetor, size_t tamanho);


int main(int argc, char *argv[]) {
    int vetor[5] = {5, 2, 3, 1, 4};

    ordenar(vetor, 5);

    // for(int i = 0; i < 5; ++i) {
    //     printf("%d", vetor[i]);
    // }

    return EXIT_SUCCESS;
}

/*If i value is greather than j value, so i value will be push to right*/

void ordenar(int *vetor, size_t tamanho) {
    for (int i = 0; i < tamanho; ++i) { // iterate all elements except the last
        //printf("%d \n", vetor[i]);
        for (int j = i + 1; j < tamanho; ++j) { // iterate all elments after i 
            if (vetor[i] > vetor[j]) { // if i is greater than j 
                int temp = vetor[i]; // temp receiver i 
                vetor[i] = vetor[j]; // i value receive j value
                vetor[j] = temp; // j receive temp
            }
        }
    }    

    for(int i = 0; i < tamanho; ++i)
        printf("%d", vetor[i]);         
}

