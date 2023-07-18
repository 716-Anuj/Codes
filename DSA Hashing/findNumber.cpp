// You have given an array contains both positive and non positive numbers, elements in the range from -MAX to +MAX. Find particular element.
#include<iostream>
#include<math.h>
using namespace std;
#define MAX 1000

bool hashTable[2][MAX + 1];// Automatically all elements are equal to 0

void insert(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] >= 0)
        {
            hashTable[0][arr[i]] = 1;
        }
        else{
            hashTable[1][abs(arr[i])] = 1;
        }
    }
}

bool search(int key)
{
    if(key >= 0)
    {
        if(hashTable[0][key] == 1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    else{
        key = abs(key);
        if(hashTable[1][key] == 1)
        {
            return true;
        }
        else{
            return false;
        }
    }
}

int main()
{
    int size, key;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements of the Array : ";

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter a key to be searched in Array : ";
    cin>>key;

    insert(arr, size);
    if(search(key))
    {
        cout<<"Element is Present";
    }
    else{
        cout<<"Element is not Present";
    }
}