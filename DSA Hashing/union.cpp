//Function to return the size of the number of elements in union of two arrays 
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int union1(int arr1[], int size1, int arr2[], int size2)
{
    unordered_set <int> s;
    for(int i = 0; i < size1; i++)
    {
        s.insert(arr1[i]);
    }
    for(int i = 0; i < size2; i++)
    {
        s.insert(arr2[i]);
    }
    return s.size();
}


int main()
{
    int size1, size2;
    cout<<"Enter the size of the first and second Array : ";
    cin>>size1>>size2;

    int arr1[size1], arr2[size2];
    cout<<"Enter the element of the first Array  : ";
    for(int i = 0; i < size1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the element of the second Array : ";
    for(int i = 0; i < size2; i++)
    {
        cin>>arr2[i];
    }

    int size = union1(arr1, size1, arr2, size2);
    cout<<size;
}