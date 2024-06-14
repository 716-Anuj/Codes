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
    }
};

void rightView(Node* root, int &maxLevel, int currentLevel){
    if(root == NULL){
        return ;
    }

    if(currentLevel > maxLevel){
        cout<<root->data<<" ";
        maxLevel = currentLevel;
    }

    rightView(root->right, maxLevel, currentLevel+1);
    rightView(root->left, maxLevel, currentLevel+1);
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
    inorderTraversal(root);

    int maxLevel = 0;
    int currentLevel = 1;

    cout<<endl;
    cout<<"Right View : "<<endl;
    rightView(root, maxLevel, currentLevel);
}

