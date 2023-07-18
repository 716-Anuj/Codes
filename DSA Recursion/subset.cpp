// Given an integer array nums of unique elements, return all possible subsets (the powerset). The Solution set 
// must not contain duplicate subsets. Return the solution in any order.
#include<bits/stdc++.h>
using namespace std;

void subset(int arr[], int size, int arr1[])
{
    
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
    
    int size1 = pow(2, size);
    int arr1[size1];
    subset(arr, size, arr1);

    for(int i = 0; i < size1; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}