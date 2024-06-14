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

Node* invert(Node* root){
    if(root == NULL){
        return NULL;
    }

    swap(root->left, root->right);
    invert(root->left);
    invert(root->right);

    return root;
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
    root = invert(root);
}