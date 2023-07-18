#include<bits/stdc++.h>
using namespace std;

int isSorted(int arr[], int size)
{
    if(size == 1)
    {
        return 1;
    }
   if(arr[size-1] < arr[size-2])
   {
    return 0;
   }else{
    return isSorted(arr, size-1);
   }
}

int main()
{
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the element of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int k = isSorted(arr, size);
    cout<<k;
}