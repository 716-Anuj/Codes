#include<bits/stdc++.h>
using namespace std;

int fib(int n, int arr[], int count, int a, int b)
{
    if(count == n)
    {
        arr[0] = 1;
        return arr[0];
    }else{
        arr[0] = 1;
        arr[count] = a + b;
        return fib(n, arr, count+1, arr[count - 1], arr[count]);
    }
}

int main()
{
    int n, count = 1, a = 0, b = 1;
    cout<<"Enter the nth number : ";
    cin>>n;

    int arr[n];
    fib(n, arr, count, a, b);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }

}