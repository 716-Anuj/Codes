#include<bits/stdc++.h>
#include <cstddef>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    public:
    Node(int data1){
        data = data1;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            }else{
                cout<<temp->data<<" ";
                if(temp->left){
                q.push(temp->left);
            if(temp->right){
                q.push(temp->right);
            }
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
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(Node* &root){
    queue<Node*> q;
    cout<<"Enter the data for root : ";
    int data;
    cin>>data;

    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter left node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
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

    cout<<"Enter the data for inserting in left of : "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data for inserting in right of : "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

int main(){
    Node* root = NULL;
    // root = buildTree(root);
    buildFromLevelOrder(root);
    cout<<"Printing level order traversal : "<<endl;
    levelOrderTraversal(root);

    cout<<"Inorder Traversal : "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Inorder Traversal : "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Inorder Traversal : "<<endl;
    postorder(root);
}