#include<bits/stdc++.h>
#include <cstddef>
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

Node* convertArr2LL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* reverse(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* temp = head;
    Node* front;
    Node* prev = NULL;

    while(temp != NULL){
        front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

Node* add1(Node* head){
    int carry = 1;
    Node* temp = head;
    int val;

    Node* prev = NULL;
    while(temp != NULL){
        if(carry){
            val = temp->data+1;
            temp->data = val%10;
            carry = (val)/10;
        }
        prev = temp;
        temp = temp->next;
    }
    if(carry){
        Node* newNode = new Node(carry);
        prev->next = newNode;
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


int main(){
    vector<int> arr = {9, 9, 9, 9};
    Node* head = convertArr2LL(arr);
    print(head);

    head = reverse(head);
    print(head);

    head = add1(head);
    print(head);

    head = reverse(head);
    print(head);
}