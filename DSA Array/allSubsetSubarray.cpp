//Given an array a[] of size n. Output sum of each subarrays of the given Array.
#include<iostream>
using namespace std;
int main()
{
    int size, sum = 0;
    cout<<"Enter the size of the Array : ";
    cin>>size;
    
    int arr[size];
    cout<<"Enter the elements of an Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < size; i++)
    {
        sum = 0;
        for(int j = i; j < size; j++)
        {
           sum = sum + arr[j];
           cout<<sum<<endl;
        }
    }
}