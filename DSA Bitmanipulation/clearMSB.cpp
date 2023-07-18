#include<bits/stdc++.h>
using namespace std;

void printBin(int num)
{
    for(int i = 10; i>= 0; i--)
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

    cout<<"Enter the Bit Index : ";
    cin>>bit_index;

    for(int i = 10; i >= bit_index; i--)
    {
        num = (num & (~(1 << i)));
    }
    printBin(num);


}