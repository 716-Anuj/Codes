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

Node* convert2Arr(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* removeHead(Node* head){
    if(head == NULL){
        return head;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* temp = head;
    while(temp->next->next){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* deleteK(Node* head, int k){
    if(head == NULL){
        return head;
    }
    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete(temp);
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;

    while(temp !=NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev =temp;
        temp = temp->next;
    }
    return head;
}

Node* deleteElement(Node* head, int val){
    if(head == NULL){
        return head;
    }
    if(head->data == val){
        Node* temp = head;
        head = head->next;
        delete(temp);
    }

    Node* temp = head; Node* prev;

    while(temp != NULL){
        if(temp->data == val){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Node* head = convert2Arr(arr);

    head = removeHead(head);
    print(head);

    head = removeTail(head);
    print(head);

    int k;
    cout<<"Enter kth index to be deleted : ";
    cin>>k;

    head = deleteK(head, k);
    print(head);

    int val;
    cout<<"Enter the element to be deleted: ";
    cin>>val;

    head = deleteElement(head, val);
    print(head);
}