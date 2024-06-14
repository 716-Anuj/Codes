#include<bits/stdc++.h>
#include <cstddef>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    public:
    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1){
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};

Node* createArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* back = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, back);
        back->next = temp;
        back = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* deleteKey(Node* head, int key){
    Node* temp = head;

    while(temp != NULL){
        if(temp->data == key){
            if(temp == head){
                head = head->next;
            }
            Node* nextNode = temp->next;
            Node* prevNode = temp->prev;

            if(nextNode){
                nextNode->prev = prevNode;
            }
            if(prevNode){
                prevNode->next = nextNode;
            }
            delete(temp);
            temp = nextNode;
        }else{
            temp = temp->next;
        }
    }
    return head;
}

int main(){
    vector<int> arr = {1, 2, 3, 1, 1, 1, 2, 1};
    Node* head = createArr2DLL(arr);
    print(head);

    int key;
    cout<<"Enter the key to be deleted : ";
    cin>>key;

    head = deleteKey(head, key);
    print(head);
}