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

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->left);
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    return max(left, right);
}

int diameterOfTree(Node* root){
    if(root == NULL){
        return 0;
    }

    int op1 = diameterOfTree(root->left);
    int op2 = diameterOfTree(root->right);
    int op3 = height(root->left)+height(root->right)+1;

    int ans = max(op1, max(op2, op3));

    return ans;
}

Node* buildTree(Node* root){
    cout<<"Enter the data ";
    int data;
    cin>>data;
    cout<<endl;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter the left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    inorder(root);
    int diameter = diameterOfTree(root);
}