#include<bits/stdc++.h>
#include <cstddef>
#include <unordered_set>
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

Node* convertArr2LL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

bool detectLoop(Node* head){
    unordered_set<Node*> hs;
    Node* temp = head;

    while(temp != NULL){
        if(hs.find(temp) != hs.end())
            return true;
        hs.insert(temp);
        temp = temp->next;
    }
    return false;
}

bool detectLoopUsingSlowAndFast(Node* head){
    if(head == NULL || head->next == NULL){
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;

    }
    return false;
}

// void print(Node* head){
//     while(head != NULL){
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     cout<<endl;
// }

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Node* head = convertArr2LL(arr);
    // print(head);

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = head->next->next;
    // print(head);

    bool result = detectLoop(head);
    bool result1 = detectLoopUsingSlowAndFast(head);

    if(result){
        cout<<"Loop present"<<endl;
    }
    else{
        cout<<"Loop not present"<<endl;
    }

    if(result1){
        cout<<"Loop present"<<endl;
    }
    else{
        cout<<"Loop not present"<<endl;
    }
}