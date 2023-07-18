#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num & (num-1)) 
    // num = 00100000
    // num - 1 = 00011111
    // & will be zero
    {
        cout<<"Not power of 2";
    }
    else{
        cout<<"Power of 2";
    }
}