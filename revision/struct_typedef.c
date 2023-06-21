#include <stdio.h>
#include <stdlib.h>

struct Estrutura {
	int elemento;
};

typedef struct {
	int elemento;
}Estrutura2;

int main() {

	// Sem typedfe precisa de struct
	struct Estrutura e1;
	
	e1.elemento = 10;

	// Com typedef não precisa
	Estrutura2 e2;
	
	e2.elemento = 20;
	
	printf("e1: %d, e2: %d", e1.elemento, e2.elemento);

	return EXIT_SUCCESS;
}
