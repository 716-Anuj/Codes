#include<bits/stdc++.h>
#include <vector>
using namespace std;

struct Node{
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

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* y = new Node(arr[0]);
    cout << y->data<<endl;
    cout << y->next<<endl;

    // Node y = Node(arr[0], nullptr);
    // cout<< y.data<<endl;
    // cout<<y.next<<endl;

}


