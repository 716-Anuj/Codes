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
    if(!root){
        return;
    }

    stack<Node*> st;

    st.push(root);

   while(true){
    if(root != nullptr){
        st.push(root);
        root = root->left;
    }
    else{
        if(st.empty()) break;
        root = st.top();
        st.pop();
        cout<<root->data<<" ";
        root = root->right;
    }
   }
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
    inorder(root);
}