// Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S
#include<iostream>
using namespace std;
int main()
{
    int size, number, k;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size], arr1[size];

    cout<<"Enter the elements of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the number : ";
    cin>>number;

    for(int i = 0; i < size; i++)
    {
        int sum = 0;
        k = 0;
        for(int j = i; j < size; j++)
        {
            if(sum < number)
            {
                sum = sum + arr[j];
                arr1[k++] = arr[j];
            }
            else
            {
                break;
            }
        }
        if(sum == number)
        {
            break;
        }
    }
    for(int i = 0; i < k; i++)
    {
        cout<<arr1[i]<<" ";
    }
}
