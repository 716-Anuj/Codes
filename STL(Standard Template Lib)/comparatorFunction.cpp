#include<bits/stdc++.h>
using namespace std;

bool should_i_swap(int a, int b)
{
    if(a < b)
    return true;
    return false;
}

int main()
{
    int size;
    cout<<"Enter the Size : ";
    cin>>size;

    vector<int> arr(size);
    cout<<"Enter the Element : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    // for(int i = 0; i < size; i++)
    // {
    //     for(int j = i+1; j < size; j++)
    //     {
    //         if(should_i_swap(arr[i], arr[j]))
    //         swap(arr[i], arr[j]);
    //     }
    // }
    sort(arr.begin(), arr.end(), should_i_swap);

    for(int i = 0; i< size; i++)
    {
        cout<<arr[i]<<" ";
    }
}