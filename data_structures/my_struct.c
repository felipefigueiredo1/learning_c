#include <stdio.h>

struct node {
    int value;
    struct node* next;
} typedef node;

void printList(node* head) {
    node* temporary = head;

    while(temporary != NULL) {
        printf("value of node: %d\n", temporary->value);
        temporary = temporary->next;
    }
}

int main(void) {
    node one, two, tree, four;
    node* head;

    one.value = 10;
    one.next = &two;
    two.value = 20;
    two.next = &tree;
    tree.value = 30;
    tree.next = NULL;

    head = &one;

    /*
    Abaixo a variavel four irá ficar no lugar da variavel two, e irá apontar para a variavel two
    */
    four.value = 40;
    four.next = &two; // apontando para variavel two  
    one.next = &four;// apontando para variavel four

    printList(head);

    return 0;
}

