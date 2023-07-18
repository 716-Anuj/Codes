// take a pivot
// count all element less than pivot
// pivot -> start + count

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;

    for(int i = start+1; i <= end; i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotInd = start + count;
    swap(arr[pivotInd], arr[start]);

    int i = start, j = end;
    while(i < pivotInd && j > pivotInd)
    {
        while(arr[i] < pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < pivotInd && j > pivotInd)
        swap(arr[i++], arr[j--]);
    }
    return pivotInd;
}

void quickSort(int arr[], int start, int end)
{
    if(start >= end)
    {
        return;
    }
    int index = partition(arr, start, end);
    quickSort(arr, start, index-1);
    quickSort(arr, index+1, end);
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

    quickSort(arr, 0, size);

    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}