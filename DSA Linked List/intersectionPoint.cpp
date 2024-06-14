#include<bits/stdc++.h>
#include <unordered_set>
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

Node* intersection(Node* head, Node* head1){
    unordered_set<Node*> hs;

    Node* temp = head;
    Node* temp1 = head1;

    while(temp != NULL){
        hs.insert(temp);
        temp = temp->next;
    }
    while(temp1 != NULL){
        if(hs.find(temp1) != hs.end()){
            return temp1;
        }
        temp1 = temp1->next;
    }
    return NULL;
}

Node* collisionPt(Node* smallHead, Node* largeHead, int dist){
    Node* temp = smallHead;
    Node* temp1 = largeHead;

    for(int i = 0; i < dist; i++){
        temp1 = temp1->next;
    }

    while(temp1 != NULL){
        if(temp1 == temp){
            return temp;
        }
        temp = temp->next;
        temp1 = temp1->next;
    }
    return NULL;
}

Node* intersectionNode(Node* head, Node* head1){
    int cnt = 0;
    int cnt1 = 0;

    Node* temp = head;
    Node* temp1 = head1;

    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    while(temp1 != NULL){
        cnt1++;
        temp1 = temp1->next;
    }

    int dist = abs(cnt-cnt1);

    if(cnt < cnt1){
        return collisionPt(head, head1, dist);
    }
    else{
        return collisionPt(head1, head, dist);
    }
    return NULL;
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
    vector<int> arr1 = {1, 1};

    Node* head = convertArr2LL(arr);
    print(head);

    Node* head1 = convertArr2LL(arr1);
    print(head1);

    head1->next->next  = head->next->next->next;
    print(head1);

    Node* intersectionPt = intersection(head, head1);
    cout<<intersectionPt->data<<endl;

    intersectionPt = intersectionNode(head, head1);
    cout<<intersectionPt->data;
}