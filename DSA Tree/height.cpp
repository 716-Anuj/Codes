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

void inorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

int heightOfTree(Node* root){
    if(root == NULL){
        return 0;
    }
     int left = heightOfTree(root->left);
     int right = heightOfTree(root->right);

     int ans = max(left, right)+1;
     return ans;
}

Node* buildTree(Node* root){
    cout<<"Enter the data : ";
    int data;
    cin>>data;
    cout<<endl;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data left to "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data right to "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

int main(){
    Node* root = NULL;

    root = buildTree(root);
    inorderTraversal(root);
    cout<<endl;

    int height = heightOfTree(root);
    cout<<"Height of tree : "<<height<<endl;
}