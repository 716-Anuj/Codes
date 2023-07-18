// Given an array of distinct integers and a target integer target, return a list of all unique combinations of candidates 
// where the chosen number sum to target. You may return the combination in any order.
// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least 
// one of the chosen numbers is different.
// It is guranteed that the number of unique combinations that sum up to target is less than 150 combination for given input.

#include<bits/stdc++.h>
using namespace std;

void combination(int arr[], int arr1[], int size, int target, int sum)
{
    if (sum == target)
    {
        
    }
}

int main()
{
    int size, target;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the target element : ";
    cin>>target;
}   