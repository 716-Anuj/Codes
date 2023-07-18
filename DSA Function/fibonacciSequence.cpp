#include<iostream>
using namespace std;

void fib(int number)
{
    int a = 0, b = 1;
    cout<<a<<" ";
    for(int i = 1; i < number; i++)
    {
        cout<<b<<" ";
        b = b + a;
        a = b - a;
    }
}

int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    fib(number);
}