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

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    if(head == NULL){
        return head;
    }

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next =temp;
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

Node* insertHead(Node* head, int val){
    return new Node(val, head);
}

Node* insertTail(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new Node(val);
    return head;
}

Node* insertK(Node* head, int val, int ind){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    int cnt = 0;

    while(temp != NULL){
        cnt++;
        if(cnt == ind-1){
            Node* temp1 = new Node(val);
            temp1->next = temp->next;
            temp->next = temp1;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Node* head = convertArr2LL(arr);

    int val;
    cout<<"Enter the value to be inserted at beginning : ";
    cin>>val;

    head = insertHead(head, val);
    print(head);

    int val1;
    cout<<"Enter the value to be inserted at last : ";
    cin>>val1;

    head = insertTail(head, val1);
    print(head);

    int val2, ind;
    cout<<"Enter the value to be inserted at kth index : ";
    cin>>val2;
    cout<<"Enter the index at which element has to be inserted : ";
    cin>>ind;
    head = insertK(head, val2, ind);
    print(head);
}