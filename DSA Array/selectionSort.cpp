//Find the min element in the unsorted array and swap it with the element at beginning.
#include<iostream>
using namespace std;
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

    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}