#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

void hexadecimalToDecimal(string number, int length)
{
   int sum = 0, count = 0;
   for(int i = length - 1; i >= 0; i--)
   {
    if(number[i] >= '0' && number[i] <= '9')
    {
        sum = sum + (number[i] - 48) * pow(16, count);
        count++;
    }
    else if(number[i] >= 'A' && number[i] <= 'F')
    {
        sum = sum + (number[i] - 55) * pow(16, count);
        count++;
    }
   }
   cout<<sum;
}

int main()
{
    char number[20];
    cout<<"Enter a Hexidecimal number : ";
    cin>>number;
    int len = strlen(number);
    hexadecimalToDecimal(number, len);
}