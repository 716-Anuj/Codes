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

void zigZag(Node* root){
    if(root ==NULL){
        return;
    }

    stack<Node*>s1;
    stack<Node*>s2;
    s1.push(root);

    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            root = s1.top();
            cout<<root->data<<" ";
            s1.pop();

            if(root->left){
                s2.push(root->left);
            }
            if(root->right){
                s2.push(root->right);
            }
        }

        while(!s2.empty()){
            root = s2.top();
            cout<<root->data<<" ";
            s2.pop();

            if(root->right){
                s1.push(root->right);
            }
            if(root->left){
                s1.push(root->left);
            }
        }
    }
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
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

    cout<<"Inorder Traversal: "<<endl;
    inorder(root);

    cout<<endl;
    cout<<"Spiral Representation : ";
    zigZag(root);
}