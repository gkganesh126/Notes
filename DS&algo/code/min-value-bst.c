#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *left, *right;
};
struct Node* newNode(int data) {
	struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct Node* insert(struct Node* node, int data) {
	if(node == NULL) 
	       return newNode(data);
	if(data<=node->data)
		node->left = insert(node->left, data);
	else 
		node->right = insert(node->right, data);
	return node;
}

int minNode(struct Node* node) {
	if(node->left != NULL) 
		minNode(node->left);
	return node->data;
}
int main() {
	struct Node * root=NULL;
//	int minNode(root);
	root = insert(root, 4);
	insert(root, 2);
	 insert(root, 1);
	 insert(root, 3);
	 insert(root, 6);
	 insert(root, 5);

	 printf("minval : %d", minNode(root));
}


