#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[], int size, int max_element){
    int count[50] = {0};

    for(int i = 0; i < size; i++){
        count[arr[i]] += 1; 
    }

    for(int i = 0; i <= max_element; i++){
        for(int j = 1; j <= count[i]; j++){
            cout<<i<<" ";
        }
    }
}

int main(){
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    int max_element = 0;

    cout<<"Enter the element of the Array : ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
        if(max_element < arr[i])
        max_element = arr[i];
    }

    countSort(arr, size, max_element);
}