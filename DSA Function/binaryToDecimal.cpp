#include<iostream>
#include<math.h>
using namespace std;

void binary(int bin)
{
    int count = 0, sum = 0, reverse;
    while(bin > 0)
    {
        reverse = bin % 10;
        bin = bin / 10;
        sum = sum + pow(2, count) * reverse;
        count++;
    }
    cout<<sum;
}

int main()
{
    int bin;
    cout<<"Enter a Binary Number : ";
    cin>>bin;
    binary(bin);
}