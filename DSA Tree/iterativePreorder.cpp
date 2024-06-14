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

vector<int>preorder(Node* root){
    vector<int> arr;
    if(root == NULL){
        return arr;
    }
    stack<Node*> st;

    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();

        arr.push_back(root->data);

        if(root->right)
            st.push(root->right);

        if(root->left)
            st.push(root->left);
    }
    return arr;
}

Node* buildTree(Node* root){
    cout<<"Enter data : "<<endl;
    int data;
    cin>>data;
    cout<<endl;

    root = new Node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"Enter data left to "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data right to "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

int main(){
    Node* root = NULL;
    root = buildTree(root);

    vector<int> result = preorder(root);

    for(int val : result){
        cout<<val<<" ";
    }
    
}