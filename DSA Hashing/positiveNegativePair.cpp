// Given an array of distinct integers, print all the pairs having positive value and negative balue of a number that exists in array
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int posNeg(int arr[], int size)
{
    unordered_map<int, int> umap;
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
    posNeg(arr, size);
}