#include<bits/stdc++.h>
#include <cstddef>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convert2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* insertHead(Node* head, int val){
    return new Node(val, head, nullptr);
}

Node* insertTail(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }

    Node* prev = head;
    while(prev->next != NULL){
        prev = prev->next;
    }
    prev->next = new Node(val, nullptr, prev);
    return head;
}

Node* insertK(Node* head, int val, int k){
    if(head == NULL){
        return new Node(val);
    }

    Node* prev = head;
    int cnt = 0;

    while(prev != NULL){
        cnt++;
        if(cnt == k){
            Node* temp = new Node(val, nullptr, prev);
            temp->next = prev->next;
            prev->next->back = temp;
            prev->next = temp; 
            break;
        }
        prev = prev->next;
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
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Node* head = convert2DLL(arr);

    head = convert2DLL(arr);
    print(head);

    int index, val;
    printf("Enter the element to be inserted before head : ");
    cin>>val;

    head = insertHead(head, val);
    print(head);

    printf("Enter the value to be inserted at tail : ");
    cin>>val;

    head = insertTail(head, val);
    print(head);

    printf("Enter the value to be inserted at kth index : ");
    cin>>val;
    printf("Enter the index : ");
    cin>>index;

    head = insertK(head, val, index);
    print(head);
}