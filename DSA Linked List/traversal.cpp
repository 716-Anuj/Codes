#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convert2Arr(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthLL(Node* head){
    int cnt = 0;
    Node* temp = head;

    while(temp){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int checkIfPresent(Node* head, int val){
    Node*temp = head;

    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr = {1, 2, 3, 4};
    Node* head = convert2Arr(arr);
    Node* temp = head;
    int length;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    length = lengthLL(head);
    cout<<length<<endl;
    cout<<checkIfPresent(head, 3);
}