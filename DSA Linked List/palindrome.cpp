#include<bits/stdc++.h>
#include <cstddef>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data =data1;
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

int isPalindrome(Node* head){
    if(head == NULL || head->next == NULL){
        return 0;
    }

    Node* temp = head;
    stack<int> st;

    while(temp != NULL){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while(temp != NULL){
        if(temp->data != st.top()){
            return 1;
        }
        st.pop();
        temp = temp->next;
    }
    return 0;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1, 2, 1};
    Node* head = convertArr2LL(arr);
    print(head);

    int size = 0;
    Node* temp = head;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }

    int result;

    result = isPalindrome(head); // We can't reverse the data to check palindrome as location of both head and head1 are same

    if(result == 0){
        cout<<"Palindromne";
    }
    else{
        cout<<"Not a Palindrome";
    }

}