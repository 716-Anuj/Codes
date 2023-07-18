#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int startPt = 0;
    int endPt = size;
    while(startPt <= endPt)
    {
        int mid = (startPt + endPt)/2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            endPt = mid - 1;
        }
        else{
            startPt = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int size, key;
    cout<<"Enter the size of the Array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the ordered elements of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to be Searched : ";
    cin>>key;
    int position = binarySearch(arr, size, key);
    cout<<position;
}