#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for(int i = 10; i >= 0; i--)
    {
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}

int main()
{
    printBinary(10);
    printBinary(~10);
    int a = 15; // Given Number
    int i = 1; //Index
    if((a & (1 << i)) != 0)
    {
        cout<<"Set bit"<<endl;
    }
    else{
        cout<<"Not set bit"<<endl;
    }

    // to make set in place of & we use |
    //to make unset bit & with ~a

    printBinary(a & (~(1<<3))); //Unset
    printBinary(a | (1 << 2)); //Set
    cout<<(a & (~(1<<3)))<<endl;
    cout<<(a | (1 << 2))<<endl;

    //Toggle
    printBinary(a ^ (1 << 3));

    int count = 0;
    //To count number of set bits
    for(int i = 31; i >= 0; --i)
    {
        if((15 & (1<<i)) != 0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    cout<<__builtin_popcount(a)<<endl;
    
}