#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end, int mid){
    int leftArraySize = mid-start+1;
    int rightArraySize = end-mid;

    int left[leftArraySize], right[rightArraySize];

    for(int i = 0; i < leftArraySize; i++){
        left[i] = arr[start+i];
    }

    for(int j = 0; j < rightArraySize; j++){
        right[j] = arr[mid+1+j];
    }

    int k = start, i = 0, j = 0;

    while(i < leftArraySize && j < rightArraySize){
        if(left[i] <= right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
        }
    }

    while(i < leftArraySize){
        arr[k++] = left[i++];
    }

    while(j < rightArraySize){
        arr[k++] = right[j++];
    }
}

void mergeSort(int arr[], int start, int end){
    if(start == end){
        return;
    }

    int mid = start + (end-start)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, end, mid);
}

int main(){
    int arr[] = {5, 1, 3, 4, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, size-1);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}