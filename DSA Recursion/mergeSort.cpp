#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end)
{
    int mid = (start + end)/2;

    int len1 = mid -start + 1;
    int len2 = end - mid;
    int arr1[len1];
    int arr2[len2];

    int k = start;

    for(int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k++];
    }
    for(int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k++];
    }

    k = start;
    int index1 = 0, index2 = 0;
    while(index1 < len1 && index2 < len2)
    {
        if(arr1[index1] < arr2[index2])
        {
            arr[k++] = arr1[index1++];
        }
        else{
            arr[k++] = arr2[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[k++] = arr1[index1++];
    }

    while (index2 < len2)
    {
        arr[k++] = arr2[index2++];
    }
    
}

void mergeSort(int arr[], int start, int end)
{
    //Base Case
    if(start >= end)
    {
        return;        
    }

    int mid = (start+end)/2;

    //Left Part
    mergeSort(arr, start, mid);

    //Right Sort
    mergeSort(arr, mid+1, end);

    merge(arr, start, end);

}

int main()
{
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    mergeSort(arr, 0, size-1);

    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}