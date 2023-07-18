// Given an array of N positive integers and another number X. Determine whether or not their exists two elements in Arr whose sum is exactly X
// We cant use unordered_set because it again count itself while adding
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

bool keyPair(int arr[], int size, int number)
{
    unordered_map<int, int> umap;
    for(int i = 0; i < size; i++)
    {
        umap[arr[i]]++;
        // key = arr[i];
        // umap[key]++;
    }

    for(auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        int key = itr->first;
        int value = itr->second;

        int pair = number - key;

        if(pair == key)
        {
            if(value > 1)
            {
                return true;
            }
        }
        else if(umap.find(pair) != umap.end())
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int size, key, number;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the summed number : ";
    cin>>number;
    int result = keyPair(arr, size, number);
    if(result == 1)
    cout<<"Present";
    else{
        cout<<"Not Present";
    }
}