#include<iostream>
using namespace std;
int main()
{
    int arr[10], number;
    cout<<"Enter 10 number of Array : ";
    for(int i = 0; i < 10; i++)
    {
        cin>>arr[i];;
    }
    cout<<"Enter a number to be Searched : ";
    cin>>number;
    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == number)
        {
            cout<<number<<" is present at "<<i<<" position";
            break;
        }
    }
}