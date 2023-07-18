#include<iostream>
#include<math.h>
using namespace std;

void octal(int number)
{
    int count = 0, sum = 0, reverse;
    while(number > 0)
    {
        reverse = number % 10;
        number = number / 10;
        sum = sum + pow(8, count) * reverse;
        count++;
    }
    cout<<sum;
}

int main()
{
    int number;
    cout<<"Enter a Octal Number : ";
    cin>>number;
    octal(number);
}