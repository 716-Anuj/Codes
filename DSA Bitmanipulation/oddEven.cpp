#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    if(num & 1  != 0)
    {
        cout<<"Odd";
    } 
    else{
        cout<<"Even";
    }
}