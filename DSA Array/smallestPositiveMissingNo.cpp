// You are given an arr[] of N integers including 0. The task is to find the smallest 
// positive number missing from the array
#include<bits/stdc++.h>
using namespace std;

int smallestPositive(int arr[], int size)
{
    int min = 99999999;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 1)
        {
            continue;
        }
        if(arr[i] > 1 && min > arr[i])
        {
            min = arr[i];
        }
    }
    if(min == 99999999)
    {
        min = 2;
    }
    return min-1;
}

int main()
{
    int size, arr[size];
    cout<<"Enter the size of the Array : ";
    cin>>size;

    cout<<"Enter the elements of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int num = smallestPositive(arr, size);
    cout<<num;
}