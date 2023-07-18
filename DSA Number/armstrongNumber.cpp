#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int number, number1, reverse;
    int count = 0, sum = 0;
    cout<<"Enter a number : ";
    cin>>number;
    number1 = number;

    while(number1 > 0)
    {
        reverse = number1 % 10;
        number1 = number1 / 10;
        count++;
    }
    number1 = number;
    while(number1 > 0)
    {
        reverse = number1 % 10;
        number1 = number1 / 10;
        sum = sum + pow(reverse, count);
    }
    if(sum == number)
    {
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not a Armstrong Number";
    }
    
}