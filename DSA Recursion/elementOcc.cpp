#include <bits/stdc++.h>
using namespace std;

int allIndices(int arr[], int size, int element, int count)
{
    if (size - 1 < 0)
    {
        return count;
    }
    if (arr[size - 1] == element)
    {
        return allIndices(arr, size - 1, element, count+1);
    }   
    else
    {
        return allIndices(arr, size - 1, element, count);
        
    }
}

int main()
{
    int size, element, count = 0;
    cout << "Enter the size of the Array : ";
    cin >> size;

    int arr[size];
    cout << "Enter the element of the Array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element whose position you need : ";
    cin >> element;
    cout << allIndices(arr, size, element, count);
}