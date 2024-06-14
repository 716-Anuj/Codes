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

Node* convertarr2LL(vector<int>&arr){
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
    while (head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* arrange(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0)cnt0++;
        else if (temp->data == 1)cnt1++;
        else cnt2++;
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL){
        if(cnt0 != 0){
            temp->data = 0;
            cnt0--;
        }
        else if(cnt1 != 0){
            temp->data = 1;
            cnt1--;
        }
        else{
            temp->data = 2;
            cnt2--;
        }
        temp = temp->next;
    }
    return head;
}

Node* optimizeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);

    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;

    Node* temp = head;

    while (temp != NULL) {
        if(temp->data == 0){
            zero->next = temp;
            zero = temp;
        }
        else if(temp->data == 1){
            one->next = temp;
            one = temp;
        }
        else{
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }
    zero->next = (oneHead->next)?oneHead->next:twoHead->next;
    one->next = (twoHead->next);
    two->next = NULL;

    head = zeroHead->next;

    delete(zeroHead);
    delete(oneHead);
    delete(twoHead);

    return head;
}

int main(){
    vector<int> arr = {1, 0, 0, 1, 2, 0, 2, 1};
    Node* head = convertarr2LL(arr);
    print(head);

    vector<int> arr1 = {1, 2, 0, 1, 0, 2, 2, 0, 1};
    Node*head1 = convertarr2LL(arr1);

    head = arrange(head);
    print(head);

    head1 = optimizeSort(head1);
    print(head1);
}