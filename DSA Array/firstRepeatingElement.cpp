// Given an array arr[] of size N. The task is to find the first repeating element in the array of integers i.e. an
// element that occurs more than once and whose index of first occcurence is smallest.
#include<iostream>
#include<unordered_map>
using namespace std;

int firstRepeatingElement(int arr[], int size)
{
    unordered_map<int, int> umap;
    for(int i = 0; i< size; i++)
    {
        umap[arr[i]]++;
    }
    for(int i = 0; i < size; i++)
    {
        int key = arr[i];
        auto tmp = umap.find(key);
        if(tmp->second > 1)
        {
            return i;
        }
    }
    return -1;
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
    int index = firstRepeatingElement(arr, size);
    cout<<"First repeating Elemnet : "<<index;
}
    