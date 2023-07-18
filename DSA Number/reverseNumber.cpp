#include<iostream>
using namespace std;
int main()
{
    int number, reverse;
    cout<<"Enter a number to be reversed : ";
    cin>>number;

    while(number > 0)
    {
        reverse = number % 10;
        number = number / 10;
        cout<<reverse;
    }
}