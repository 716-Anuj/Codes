#include<bits/stdc++.h>
#include <cstddef>
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
        next = nullptr;
        back = nullptr;
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


Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete(prev);
    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->back->next = nullptr;
    delete(temp);
    return head;
}

Node* deleteK(Node* head, int k){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    int cnt = 0;
    Node* temp = head;

    while(temp != NULL){
        cnt++;
        if(cnt == k){
            temp->back->next = temp->next;
            temp->next->back = temp->back;
            temp->back = nullptr;
            temp->next = nullptr;
            free(temp);
            break;
        }
        temp = temp->next;
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
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    Node* head = convertArr2DLL(arr);
    print(head);

    head = deleteHead(head);
    print(head);

    head = deleteTail(head);
    print(head);

    int k;
    cout<<"Enter the kth index to be deleted : ";
    cin>>k;

    head = deleteK(head, k);
    print(head);
}