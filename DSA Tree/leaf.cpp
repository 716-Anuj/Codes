#include<bits/stdc++.h>
#include <cstddef>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    public:
    Node(int data1){
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};

void leaf(Node* root){
    if(root == NULL){
        return;
    }

    if(root->left == NULL && root->right == NULL){
        cout<<root->data<<" ";
    }

    leaf(root->left);
    leaf(root->right);
}

void inorderTraversal(Node* root){
    if(root == NULL){
        return ;
    }

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

Node* buildTree(Node* root){
    cout<<"Enter data ";
    int data;
    cin>>data;
    cout<<endl;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    cout<<"Inorder Traversal : "<<endl;
    inorderTraversal(root);
    cout<<endl;

    cout<<"Leaf Nodes : "<<endl;
    leaf(root);
}