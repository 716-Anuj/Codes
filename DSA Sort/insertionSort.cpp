#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        int j = i+1;
        while(j > 0 && (arr[j] < arr[j-1])){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

int main(){
    int arr[] = {5, 3, 1, 4, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, size);

    for(int i =0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}