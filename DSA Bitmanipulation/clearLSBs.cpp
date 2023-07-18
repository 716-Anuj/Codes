#include<bits/stdc++.h>
using namespace std;

void printBin(int num)
{
    for(int i = 10; i >= 0; i--)
    {
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}

int main()
{
    int num, bit_index;
    cout<<"Enter a number : ";
    cin>>num;
    printBin(num);

    cout<<"Enter bit index for clear LSB : ";
    cin>>bit_index;

    // for(int i = 0; i <= bit_index; i++)
    // {
    //     num = (num & (~(1 << i)));
    // }
    // printBin(num);


    // Another method

    //   00000111011
    // & 00000100000 or 11111100000
    //   11111100000  = 00000010000 - 1
    printBin(num & (~((1 << bit_index) - 1)));
}