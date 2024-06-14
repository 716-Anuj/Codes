#include<bits/stdc++.h>
#include <cstddef>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        back = nullptr;
        next = nullptr;
    }
};

Node* convertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* reverse(Node* head){

    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* current = head;
    while (current != NULL) {
        prev = current->back;
        current->back = current->next;
        current->next = prev;
        current = current->back;
    }
    return prev->back;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node* head = convertArr2DLL(arr);
    print(head);

    head = reverse(head);
    print(head);
}