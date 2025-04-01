#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* insertLinkedList(int d) {
    struct Node * node =(struct Node*) malloc(sizeof(struct Node));
    node -> data = d;
    node -> next = NULL;
    return node;
}
void traverseLinkedList(struct Node * head) {
    struct Node * temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout<<"\n";
}
struct Node * deleteHeadOfLinkedList(struct Node *head) {
    struct Node * q = head -> next;
    free(head);

    return q;

}
void deleteEntireLinkedList(struct Node * head) {
    struct Node * temp = head, *iterator = head;
    cout<<"head: "<<head<<" temp: "<<temp<<" iterator: "<<iterator;
    while(iterator != NULL ) {
        temp = iterator -> next;
        free(iterator);
        
        iterator = temp;

    }
    head = NULL;
}
int main() {
    struct Node * head = insertLinkedList(1);
    head -> next = insertLinkedList(2);
    head -> next -> next = insertLinkedList(3);
    head -> next -> next -> next = insertLinkedList(4);

    cout<<"Creating linked list: ";
    traverseLinkedList(head);


    cout<<"Deleting head of linked list: ";
    head = deleteHeadOfLinkedList(head);
    traverseLinkedList(head);

    cout<<"Deleting entire linked list: ";
    deleteEntireLinkedList(head);
    traverseLinkedList(head);
}
