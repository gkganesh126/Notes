#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head, int dataToPush) {
    struct Node *newNode = new struct Node();
    newNode->data = dataToPush;
    newNode->next = (*head);
    (*head)= newNode;
    //cout<<head->data<<" ";
}
void printLinkedList(struct Node **head) {
    struct Node * temp = *head;
    while(temp != NULL) {
        cout<< temp ->data << " ";
        temp = temp->next;
    }
}
int main() {
    struct Node *head =  new struct Node();
    head ->data = 1;
    head->next = NULL;
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);

    printLinkedList(&head);

    getchar();
    return 0;
}