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

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* oddEvenLL(Node* head){
    Node* temp = head;
    Node* temp1 = head->next;
    Node* temp3 = head;
    int cnt = 0;

    if(head == NULL || head->next == NULL){
        return head;
    }

    while(temp3 != NULL){
        cnt++;
        temp3 = temp3->next;
    }

    int arr[cnt], i = 0;

    while(temp != NULL && temp->next != NULL){
        arr[i++] = temp->data;
        temp = temp->next->next;
    }
    if(temp){
        arr[i++] = temp->data;
    }
    while(temp1 != NULL && temp1->next != NULL){
        arr[i++] = temp1->data;
        temp1 = temp1->next->next;
    }
    if(temp1){
        arr[i++] = temp1->data;
    }

    i = 0;
    Node* temp2 = head;
    while(temp2 != NULL){
        temp2->data = arr[i++];
        temp2 = temp2->next;
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
    vector<int> arr = {1,2, 3, 4 , 5};
    Node* head = convertArr2LL(arr);
    print(head);

    head = oddEvenLL(head);
    print(head);
}