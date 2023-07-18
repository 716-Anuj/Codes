// Find first Non Repeating Element in a given arr of N integer 
// => Array coonsist of only  positive and negative integer and not zero
// Expectected Time and Space Complexity : O(N)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int firstNonRepeatingElement(int arr[], int size)
{
    unordered_map<int, int> umap;
    for(int i = 0; i < size; i++)
    {
        umap[arr[i]]++;
        //key = arr[i];
        //umap(key)++;
    }
    for(int i = 0; i < size; i++)
    {
        int key = arr[i];
        auto tmp = umap.find(key);
        if(tmp->second == 1)  // Count only 1 time 
        {
            return key;
        }
    }
    return 0;
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
    int key = firstNonRepeatingElement(arr, size);
    cout<<key;
}