#include<iostream>
using namespace std;

void addBinary(int num1, int num2)
{
    int sum = 0, carry = 0, rev1, rev2, i = 0;
    int bin[20];
    while(num1 > 0 || num2 > 0)
    {
        rev1 = num1 % 10;
        rev2 = num2 % 10;
        sum = sum + rev1 + rev2 + carry;
        if(sum > 1)
        {
            carry = 1;
            if(sum % 2 == 0)
            {
                sum = 0;
            }
            else{
                sum = 1; 
            }
        }
        else{
            carry = 0;
        }
        bin[i] = sum;
        i++;
        num1 = num1 / 10;
        num2 = num2 / 10;
    }
    bin[i++] = carry;
    for(int j = i -1; j >= 0; j--)
    {
        cout<<bin[j];
    }
}

int main()
{
    int num1, num2;
    cout<<"Enter 1st number with Base 2 : ";
    cin>>num1;
    cout<<"Enter 2nd number with Base 2 : ";
    cin>>num2;
    addBinary(num1, num2);
}