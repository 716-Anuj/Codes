#include<bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int low, int up, int element)
{
    if(low > up)
    {
        return -1;
    }

    int mid = (low + up)/2;

    if(arr[mid] == element)
    {
        return mid;
    }

    if(arr[mid] > element)
    {
        return binSearch(arr, low, up-1, element);
    }
    else{
        return binSearch(arr, low+1, up, element);
    }
}

int main()
{
    int size, element;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element of the array to be searched : ";
    cin>>element;
    cout<<binSearch(arr, 0, size, element);

}