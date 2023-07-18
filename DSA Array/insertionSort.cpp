//Insert an element from unsorted array to its correct position in sorted array
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

    for(int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
        for(int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}