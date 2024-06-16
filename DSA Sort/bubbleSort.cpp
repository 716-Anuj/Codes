#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size){
    int i, j;

    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {4, 5, 1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, size);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}