// Given an unsorted array A of size N of non-negative integers, find a contiguos subarray which adds to a given number s.
#include<bits/stdc++.h>
using namespace std;

void subarraySum(int arr[], int size, int number)
{
    int sum = 0;
    unordered_map<int, int> umap;
    for(int i = 0; i < size; i++)
    {
        umap[arr[i]]++;
    }
    for(int i = 0; i < size; i++)
    {
        int key = arr[i];
        sum = sum + key;
        if(sum == number)
        {
            cout<<"Contiguous Subarray : 0 - "<<i;
            return;
        }
        else if(umap.find(sum - number) != umap.end())
        {
            cout<<"Contiguous Subarray : "<< umap[sum - number]<<" - "<< i;
            return;
        }
    }
    cout<<"No Subarray Present :(";
}

int main()
{
    int size, number;
    cout<<"Enter the size of the Array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the Array : ";
    for(int i = 0 ; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a summed number : ";
    cin>>number;
    subarraySum(arr, size, number);
    return 0;
}