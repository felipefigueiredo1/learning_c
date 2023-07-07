#include <stdio.h>

/*
Diferente de arrays , uma lista encadeada pode ter elementos
em diferentes partes da memoria, ligados um a um atraves
de ponteiros em cada nó.

Uma lista encadeada é melhor para inserção de novos elementos,
no array teriamos que declarar um array gigante para sempre ter espaço
ou aumentar a memoria com malloc/realloc, ambas soluções nao performaticas
*/

/*
Aqui está sendo definido o nó, cada nó tera o elemento da lista encadeada contendo
seu valor e um ponteiro apontando para o proximo nó */ 
struct node {
    int value;
    struct node* next;
};
typedef struct node node_t;

void printList(node_t *head) {
        node_t *temporary = head;   // o ponteiro temporary ira receber o ponteiro head para o struct node_t

        while(temporary != NULL) {
            printf("%d - ", temporary->value); // O ponteiro temporary irá acessar o valor do nó para qual ele esta apontando
            temporary = temporary->next; // Aqui o ponteiro temporary irá receber um ponteiro para o proximo item do nó
        }

        printf("\n");
}

node_t  *create_new_node(int value) {
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}

node_t  *insert_at_head(node_t **head, node_t *node_to_insert) {
    node_to_insert->next = *head; // cada iteração vai receber o struct inserido anteriormente em head, head representa apenas o endereço de memoria
    *head = node_to_insert; // entao head receberá o node atual da iteração
    return node_to_insert;
}

void insert_after_node(node_t *node_to_insert_after, node_t* newnode) {
    newnode->next = node_to_insert_after->next; // pega o proximo ponteiro do node que ele vai ser inserido apos, o ponteiro atual do node que ele quer ser inserido apos
    node_to_insert_after->next = newnode; // o node que ele vai ser inserido apos agora aponta para o node novo
}

node_t *find_node(node_t *head, int value) {
    node_t *tmp = head;

    while(tmp != NULL) {
        if(tmp->value == value) return tmp;
        tmp = tmp->next;
    }

    return NULL;
}

int main(void) {
    node_t *head = NULL;
    node_t *tmp;
    
    for(int i = 0; i < 25; i++) {
        tmp = create_new_node(i); // o ponteiro tmp irá apontar para um novo node
        insert_at_head(&head, tmp); // o ponteiro head enviará o head atual para o next de tmp, e então depois o head terá o ponteiro para o node de tmp
    }

    tmp = find_node(head, 13);
    printf("Found node with value %d\n", tmp->value);

    insert_after_node(tmp, create_new_node(75));

    printList(head);

    return 0;
}