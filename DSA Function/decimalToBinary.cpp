#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

void binary(int number)
{
    int bin[20], count = 0;
    while(number > 0)
    {
        bin[count] = number % 2;
        number = number / 2;
        count++;
     
    }

    for(int i = count-1; i >= 0; i--)
    {
        cout<<bin[i];
    }
}

int main()
{
    int number;
    cout<<"Enter a Decimal Number : ";
    cin>>number;
    binary(number);
}