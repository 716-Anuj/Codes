#include<bits/stdc++.h>
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
        left = nullptr;
        right = nullptr;
    }
};

void reverseLevelOrder(Node* root){
    if(!root){
        return;
    }
    stack<Node*>st;
    queue<Node*>q;

    q.push(root);

    while(!q.empty()){
        root = q.front();
        st.push(q.front());
        q.pop();

        if(root->right){
            q.push(root->right);
        }
        if(root->left){
            q.push(root->left);
        }
    }

    while(!st.empty()){
        cout<<st.top()->data<<" ";
        st.pop();
    }
    cout<<endl;
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
    reverseLevelOrder(root);
}
