#include<bits/stdc++.h>
#include <cstddef>
#include <vector>
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
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* sum(Node* num1, Node* num2){
    Node* dummyHead = new Node(-1);
    Node* curr = dummyHead;
    Node* temp1 = num1;
    Node* temp2 = num2;
    int carry = 0;

    while (temp1 != NULL || temp2 != NULL) {
        int sum = carry;
        if(temp1){
            sum += temp1->data;
        }
        if(temp2){
            sum += temp2->data;
        }
        Node* newNode = new Node(sum%10);
        carry = sum/10;

        curr->next = newNode;
        curr = curr->next;

        if(temp1){
            temp1 = temp1->next;
        }
        if(temp2){
            temp2 = temp2->next;
        }
    }
    if(carry){
        Node* newNode = new Node(carry);
        curr->next = newNode;
    }
    return dummyHead->next;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr1 = {9, 2, 3};

    Node* head = convertArr2LL(arr);
    print(head);
    Node* head1 = convertArr2LL(arr1);
    print(head1);

    Node* add = sum(head, head1);
    print(add);
}