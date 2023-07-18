#include<iostream>
using namespace std;

int sum(int number)
{
    int s = 0;
    for(int i = 1; i <= number; i++)
    {
        s = s + i;
    }
    return s;
}

int main()
{
    int number;
    cout<<"Enter the Number : ";
    cin>>number;

    int result = sum(number);
    cout<<result;
}