#ifndef _LIST_H
#define _LIST_H
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
Node* createNode(int data);
void appendNode(Node** head_ref, int data);
void deleteNode(Node** head_ref, int key);
void updateNode(Node* head, int oldData, int newData);
Node* searchNode(Node* head, int key);
void print_hello();
#endif