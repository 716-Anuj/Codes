//Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1], ...., a[i])
// Example 1 0 5 4 6 8
// index   0 1 2 3 4 5
//         1 1 5 5 6 8 max till i
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int size, mx = -99999999;
    cout<<"Enter the of the Array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < size; i++)
    {
        cout<<i<<" - "<<arr[i]<<endl;
        if(arr[i] > arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        
    }
    // 2nd method
    // for(int i = 0; i < size; i++)
    // {
    //     mx = max(mx, arr[i]);
    //     cout<<mx<<" ";
    // }
}


