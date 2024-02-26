#ifndef LIST_H
#define LIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct List {
    Node* head;
} List;

// Function prototypes
List* createList();
void insertNode(List* list, int data);
void printList(List* list);
void freeList(List* list);

#endif /* LIST_H */
