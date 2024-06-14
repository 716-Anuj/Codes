// #include <algorithm>
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

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* reverse(Node* head){
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

bool isPalindrome(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* newHead = reverse(slow->next);
    Node* first = head;
    Node* second = newHead;

    while(second != NULL){
        if(first->data != second->data){
            reverse(newHead);
            return false;
        }
        first = first->next;
        second = second->next;
    }
    reverse(newHead);
    return true;;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {3, 2, 1};
    Node* head = convertArr2LL(arr);
    print(head);

    bool result = isPalindrome(head);

    if(result){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}