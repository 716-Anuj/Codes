#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size){
    int min_id;

    for(int i = 0; i < size; i++){
        min_id= i;
        for(int j = i+1; j < size; j++){
            if(arr[min_id] > arr[j]){
                min_id = j;
            }
        }
        swap(&arr[i], &arr[min_id]);
    }
}

int main(){
    int arr[] = {3, 4, 1, 5, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, size);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}