#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+size); // Introsort = Insertion + Heap + Quick
    //For Vector
    // sort(arr.begin() + 2, arr.end());

    for(int i = 0 ; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}