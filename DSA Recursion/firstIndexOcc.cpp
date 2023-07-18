#include<bits/stdc++.h>
using namespace std;

int firstIndexOcc(int arr[], int idx, int element, int size)
{
    if(idx == size)
    {
        return -1;
    }
    if(arr[idx] == element)
    {
        return idx;
    }
    else{
        return firstIndexOcc(arr, idx+1, element, size);
    }
}

int main()
{
    int size, element;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the element of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element for first Occurenece : ";
    cin>>element;
    cout<<firstIndexOcc(arr, 0, element, size);
}