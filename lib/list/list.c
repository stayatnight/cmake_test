#include"list.h"
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void appendNode(Node** head_ref, int data) {
    Node* newNode = createNode(data);
    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }
    Node* last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}
void deleteNode(Node** head_ref, int key) {
    Node* temp = *head_ref, *prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next; // 改变头指针
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return; // 如果没找到

    prev->next = temp->next;
    free(temp);
}
void updateNode(Node* head, int oldData, int newData) {
    Node* temp = head;
    while (temp != NULL && temp->data != oldData) {
        temp = temp->next;
    }

    if (temp != NULL) {
        temp->data = newData;
    }
}
Node* searchNode(Node* head, int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}
void print_hello()
{
printf("Hello World!\n");
}