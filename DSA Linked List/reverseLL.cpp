#include<bits/stdc++.h>
#include <cstddef>
#include <stack>
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

    for(int i = 1; i < arr.size();i++){
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

Node* reverseUsingStack(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* temp = head;
    stack<int> st;
    while(temp != NULL){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

Node* reverseIterator(Node* head){
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

Node* reverseRecursive(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* newHead = reverseRecursive(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;

    return newHead;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node* head = convertArr2LL(arr);
    print(head);

    head = reverseUsingStack(head);
    print(head);

    vector<int> arr1 = {9, 8, 7, 6};
    Node* head1 = convertArr2LL(arr1);
    print(head1);

    head1 = reverseIterator(head1);
    print(head1);

    vector<int> arr2 = {1, 3, 5, 7, 9};
    Node* head2 = convertArr2LL(arr2);
    print(head2);

    head2 = reverseRecursive(head2);
    print(head2);
}