#include<bits/stdc++.h>
using namespace std;

int allIndices(int arr[], int size, int element, int count, int arr1[])
{
    if(size - 1< 0)
    {
        return count;
    }
    if(arr[size - 1] == element)
    {
        arr1[count] = size -1;
        return allIndices(arr, size - 1, element, count+1, arr1);
    }
    else{
        return allIndices(arr, size - 1, element, count, arr1);
    }
}

void allInd(int arr[], int size, int element, int count)
{
    int arr1[size];
    int k = allIndices(arr, size, element, count, arr1);
    for(int i = 0; i < k; i++)
    {
        cout<<arr1[i]<<endl;
    }
}

int main()
{
    int size, element, count = 0;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the element of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Ente the element : ";
    cin>>element;
    allInd(arr, size, element, count);
}