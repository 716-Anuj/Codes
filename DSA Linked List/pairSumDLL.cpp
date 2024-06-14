#include<bits/stdc++.h>
#include <cstddef>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next =next1;
        prev = prev1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        prev= nullptr;
    }
};

Node* createArr2DLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* back = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, back);
        back->next = temp;
        back = temp;
    }
    return head;
}

void pairSum(Node* head, int key){
    Node* start = head;
    Node* final = head;
    bool find = true;

    while(final->next != NULL){
        final = final->next;
    }

    while(start != final && final->next != start){
        if(start->data + final->data == key){
            cout<<start->data<<", "<<final->data<<endl;
            start = start->next;
            final = final->prev;
            find = false;
        }
        else if(start->data + final->data < key){
            start = start->next;
        }
        else{
            final = final->prev;
        }
    }
        if(find == true){
            cout<<"No Pair Found";
        }
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
    Node* head = createArr2DLL(arr);
    print (head);

    int key;
    cout<<"Enter the key value : ";
    cin>>key;

    pairSum(head, key);
}