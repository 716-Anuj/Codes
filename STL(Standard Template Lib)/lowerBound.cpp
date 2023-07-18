#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the element of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+ size);

    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int *ptr = lower_bound(arr, arr+size, 5);
    cout<<(*ptr)<<endl;
}