#include<bits/stdc++.h>
#include <cstddef>
#include <cstdio>
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

Node* convertarr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* deleteIndex(Node* head, int index){
    if(head == NULL){
        return NULL;
    }

    if(index < 0)
    {
        return head;
    }
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }

    if(index > len){
        return head;
    }

    temp = head;
    int cnt = 0;

    if(index == len){
        Node* newHead = head->next;
        delete(head);
        return newHead;
    }

    while (temp != NULL) {
        if(cnt == (len-index-1))
        {
            Node* deleteNode = temp->next;
            temp->next = temp->next->next;
            delete(deleteNode);
            break;
        }
        cnt++;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    Node* head = convertarr2LL(arr);
    print(head);

    int index;
    cout<<"Enter the index to be deleted from last : ";
    cin>>index;

    head = deleteIndex(head, index);
    print(head);
}