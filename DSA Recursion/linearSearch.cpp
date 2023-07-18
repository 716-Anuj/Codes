#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int size, int element)
{
    if(size < 0)
    {
        return -1;
    }
    if(arr[size] == element)
    {
        return size;
    }
    return search(arr, size-1, element);
}

int main()
{
    int size, element;
    cout<<"Enter the the size of the Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched : ";
    cin>>element;

    cout<<search(arr, size-1, element);
    
}