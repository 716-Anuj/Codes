//Google - Kick Start
// An arithmetic array is an array that contains at least two integers and the differences b/w consecutive integers are equal. For example [9, 10], [3, 3, 3], 
// and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7] and [1, 2, 4] are not arithmetic arrays.
// Sarasvati has an array of N non-negative integers. The i-th integer of an array is Ai. She wants to choose a contiguous arithmetic subarrray from her array 
// that has the max length. Please help her to determine the length of the longest contiguous arithmetic subarray.
#include<iostream>
using namespace std;
int main()
{
    int size, mx = 0, cd;
    cout<<"Enter the size of the Array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i < size; i++)
    {
        if(i == size-1)
        {
            cd = arr[i] - arr[i-1];
        }
        else{
            cd = arr[i+1] - arr[i];
        }
        int count = 1;
        for(int j = i+1; j < size; j++)
        {
            if((arr[j] - arr[j-1]) == cd)
            {
                count++;
            }
            else{
                break;
            }
        }
        if(count > mx)
        {
            mx = count;
        }
        
    }
    cout<<mx;
}