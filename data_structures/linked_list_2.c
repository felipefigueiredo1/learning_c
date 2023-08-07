#include <stdio.h>

// A linked list node
struct Node {
    int data;
    struct Node* next;
};

int size = 0;

// Given a reference (pointer to pointer)
// to the head of a list and an int, inserts
// a new node on the front of the list.
void push(struct Node** head_ref, int new_data) {
    // 1. Allocate node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // 2. Put in the data
    new_node->data = new_data;

    // 3. Make next of new node as head
    new_node->next = *head_ref;

    // 4. Move the head to point to the new node
    *head_ref = new_node;

    size++;
}

// This function insert a node after another specific node
void insertAfterNode(struct Node** head_ref, int node_value, int new_data) {
    struct Node* node_index = *head_ref;
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    while(node_index->next != NULL) {
        node_index = node_index->next;

        // new_node get the next node of specific node
        // specific node get the next to new node 
        if(node_index->data == node_value) {
            new_node->next = node_index->next;
            node_index->next = new_node;
            size++;
        }
    }
}

// Delete last node of the Linked List
void deleteAtEnd(struct Node** head_ref) {
    struct Node* node_index = *head_ref;

    while(node_index->next->next != NULL) 
        node_index = node_index->next;
    
    node_index->next = NULL;
    size--;
}

// Insert node at the end of the Linked List
void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node_index = *head_ref;

    new_node->data = new_data;
    
    while(node_index->next != NULL) {
        node_index = node_index->next;
    }

    node_index->next = new_node;
    size++;
}

// This function prints contents of
// linked list starting from head
void printList(struct Node* node) {
    while(node != NULL) {
        printf(" %d", node->data);
        node = node->next;
    }

    printf("\n");
}

// Insert node at middle
void insertAtMiddle(struct Node** head_ref, int new_data) {
    struct Node* head = *head_ref;
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    new_node->data = new_data;

    int mid = (size % 2 == 0) ? (size / 2) : (size + 1) / 2;
    int position = 1;

    while(head != NULL) {
        head = head->next;
        position++;

        if(position == mid) {
            new_node->next = head->next;
            head->next = new_node;

            size++;
        }
    }
}

int main() {
    struct Node* head = NULL;

    // Insert at the beginning
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);

    // Insert at the end
    append(&head, 10);

    // Insert after 4
    insertAfterNode(&head, 4, 10);

    push(&head, 20);

    // Remove the last node
    deleteAtEnd(&head);

    // Insert at middle
    insertAtMiddle(&head, 322);

    printf("Created linked list is: ");
    printList(head);

    return 0;
}