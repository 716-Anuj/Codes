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

bool check(Node* l, Node* r){
    if(l == NULL && r == NULL){
        return true;
    }
    if(l == NULL || r == NULL){
        return false;
    }
    if(r->data != l->data){
        return false;
    }
    bool res1 = check(l->left, r->right);
    bool res2 = check(l->right, r->left);

    if(res1 == true && res2 == true){
        return true;
    }else{
        return false;
    }
}

bool symmetric(Node* root){
    if(root == NULL){
        return true;
    }

    bool result = check(root->left, root->right);
    return result;
}

Node* buildTree(Node* root){
    cout<<"Enter data ";
    int data;
    cin>>data;
    cout<<endl;

    root = new Node(data);

    if(root == NULL){
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

    bool result = symmetric(root);

    if(result){
        cout<<"Symmetric Binary Tree";
    }else{
        cout<<"Unsymmetric Binary Tree";
    }
}