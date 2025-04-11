#include<bits/stdc++.h>

using namespace std;

struct BinaryTreeNode {
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};
vector<int> bfs(struct BinaryTreeNode *node) {
    queue<BinaryTreeNode*> q;
    vector<int> v;

    if(node == NULL) 
        return v;
    q.push(node);
    while(!q.empty()) {
        BinaryTreeNode * temp = q.front();
        v.push_back(temp->data);
        if(temp->left != NULL) 
            q.push(temp->left);
        if(temp->right != NULL)
            q.push(temp->right);
        q.pop();
    }
}
int main() {
    /*
            1
          /    \
        2       3
       /  \
    4       5
    */   
    struct BinaryTreeNode * node = 
        (struct BinaryTreeNode*) malloc(sizeof(struct BinaryTreeNode));
    node->left = 
        (struct BinaryTreeNode*) malloc(sizeof(struct BinaryTreeNode));
    node->right = 
        (struct BinaryTreeNode*) malloc(sizeof(struct BinaryTreeNode));
    node->left->left = 
        (struct BinaryTreeNode*) malloc(sizeof(struct BinaryTreeNode));
    node->left->right = 
        (struct BinaryTreeNode*) malloc(sizeof(struct BinaryTreeNode));
        
    node->data = 1;
    node->left->data=2;
    node->left->left->data=4;
    node->left->right->data=5;
    node->left->left->left=NULL;
    node->left->left->right=NULL;
    node->left->right->left=NULL;
    node->left->right->right=NULL;
    node->right->data=3;
    node->right->left=NULL;
    node->right->right=NULL;

    vector <int>res = bfs(node);
    cout<<"bfs:\n";
    for(int r: res) {
        cout<<r<<" ";
    }
}
