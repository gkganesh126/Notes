#include<bits/stdc++.h>

using namespace std;

struct BinaryTreeNode {
    int data;
    struct BinaryTreeNode * left;
    struct BinaryTreeNode * right;
};

void inorderTraversal(struct BinaryTreeNode * root) {
    if (!root)
        return;
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
void preorderTraversal(struct BinaryTreeNode *root) {
    if (!root)
        return;
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
int main() {
    struct BinaryTreeNode * node = 
        (struct BinaryTreeNode*) malloc(sizeof(struct BinaryTreeNode));
    node->left = 
        (struct BinaryTreeNode*) malloc(sizeof(struct BinaryTreeNode));
    node->right = 
        (struct BinaryTreeNode*) malloc(sizeof(struct BinaryTreeNode));
        
    node->data = 1;
    node->left->data=2;
    node->left->left=NULL;
    node->left->right=NULL;
    node->right->data=3;
    node->right->left=NULL;
    node->right->right=NULL;

    cout<<"inordertraversal: ";
    inorderTraversal(node);

    cout<<"\npreorderTraversal: ";
    preorderTraversal(node);

    free(node);
    free(node->left);
    free(node->right);
}