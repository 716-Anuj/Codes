// You are required to print the elements of array from beginning to end in a separate line.
// For the above purpose complete the body of displayArr function. Don't change the signature
// (Recursively)

#include<bits/stdc++.h>
using namespace std;

void displayArr(int arr[], int size)
{
    if(size == 0)
    {
        return;
    }
    displayArr(arr, size -1);
    cout<<arr[size - 1]<<endl;
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
    displayArr(arr, size);
}