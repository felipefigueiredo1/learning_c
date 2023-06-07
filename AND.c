#include <stdio.h>

void nochange(int var) {
    // Here, var is a copy of the original number. &var != &value
    var = 1338;
}
void change(int *var) { // INT POINTER TYPE
    // Here, var is a pointer to the original number. var == &value
    // Writing to `*var` modifies the variable the pointer points to
    *var = 1337;
}
int main() {
    int value = 42;
	printf("Valor: %d", value);
	printf("\nPonteiro: %d", &value);
    nochange(value);
    change(&value);

	printf(" %d", value);
    return 0;
}


/** to change variable value inside a function in C we need pass the pointer not the value **/

