// Repeatedly swap two adjacent elements if they are in wrong order
// 1st iteration n-1
// 2nd iteration  n-2
#include<iostream>
using namespace std;
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
    int counter = 1;
    while(counter < size)
    {
        for(int i = 0; i < size-counter; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
        for(int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        counter++;
    }
    
}