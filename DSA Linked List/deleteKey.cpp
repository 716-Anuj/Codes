#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1, Node* next1, Node* prev1){
        data1 = data;
        next1 = next;
        prev1 = prev;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* convertArr2DLL(vector<int>&arr){
    Node* head = new Node(arr[0]);

}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1, 2 , 3, 1, 1, 1, 2, 1};
    Node* head = convertArr2DLL(arr);
    print(head);
}