#include<bits/stdc++.h>
using namespace std;

int maxi(int arr[], int size)
{
    int mx;
    if(size == 1)
    {
        int mx = arr[0];
        return mx;
    }
    else{
        //return (arr[size - 1] > maxi(arr, size - 1) ? arr[size - 1] : maxi(arr, size - 1));
        if(arr[size - 1] > maxi(arr, size - 1)){
            return arr[size - 1];
        }
        else{
            return maxi(arr, size - 1);
        }
    }
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
    cout<<maxi(arr, size);
}