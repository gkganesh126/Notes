#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node * next;
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
int main() {
    struct Node * head = insertLinkedList(1);
    head -> next = insertLinkedList(2);
    head -> next -> next = insertLinkedList(3);
    head -> next -> next -> next = insertLinkedList(4);

    cout<<"Creating linked list: ";
    traverseLinkedList(head);


}