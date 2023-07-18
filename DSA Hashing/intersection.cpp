// Given two arrays a[] and b[] respectively of size of n and m, the task is to print the 
// count of elements in the intersection of the two arrays 
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int intersection(int arr1[], int size1, int arr2[], int size2)
{
    int count = 0;
    unordered_set<int> s;

    for(int i = 0; i < size1; i++)
    {
        s.insert(arr1[i]);
    }

    for(int i = 0; i < size2; i++)
    {
        int key = arr2[i];
        if(s.find(key) != s.end())
        {
            count++;
            s.erase(key);
        }
    }
    return count;
}

int main()
{
    int size1, size2;
    cout<<"Enter the size of 1st and 2nd Array : ";
    cin>>size1>>size2;

    int arr1[size1], arr2[size2];

    cout<<"Enter the elements of the 1st Array : ";
    for(int i = 0; i < size1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the elements of the 2nd Array : ";
    for(int i = 0; i < size2; i++)
    {
        cin>>arr2[i];
    }
    int common = intersection(arr1, size1, arr2, size2);
    cout<<common;
}