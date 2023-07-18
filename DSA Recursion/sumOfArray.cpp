#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int size)
{
    if(size < 0)
    {
        return 0;
    }
    else{
        return arr[size]+sum(arr, size-1);
    }
}

int main()
{
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the Array : ";
    for(int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    cout<<sum(arr, size-1);
}