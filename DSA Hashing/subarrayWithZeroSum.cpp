// Given an array of positive an negative numbers. Find if there is a subarray (of size atleast one) with 0 sum
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

bool subArray(int arr[], int size)
{
    unordered_set<int> s;
    int pref_sum = 0;
    for(int i = 0; i < size; i++)
    {
        pref_sum += arr[i];
        if(pref_sum == 0)
        {
            return true;
        }
        else if(s.find(pref_sum) != s.end())
        {
            return true;
        }
        s.insert(pref_sum);
    }
    return false;
}

int main()
{
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the Array : ";
    for(int i = 0 ; i < size; i++)
    {
        cin>>arr[i];
    }

    int result = subArray(arr, size);
    if(result == 1)
    {
        cout<<"Present";
    }
    else{
        cout<<"Not Present";
    }
}