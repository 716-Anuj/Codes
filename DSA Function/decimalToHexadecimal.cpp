#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

void hexa(int number)
{
    int i = 0, rem;
    char hex[100];
    while(number > 0)
    {
        rem = number % 16;
        if(rem >= 0 && rem <= 9)
        {
            hex[i] = 48 + rem;
        }
        else
        {
            hex[i] = 55 + rem;
        }
        i++;
        number = number / 16;

    }
    for(int j = i-1; j >= 0; j--)
    {
        cout<<hex[j];
    }
}

int main()
{
    int number;
    cout<<"Enter a Base 10 Number : ";
    cin>>number;
    hexa(number);
}