#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;

    // x ^ x == 0
    // x ^ 0 == x

    cout<<"Enter two number : ";
    cin>>num1>>num2;

    num1 = num1 ^ num2;
    num2 = num2 ^ num1;  //num2 ^ ( num1 ^ num2) => num1
    num1 = num1 ^ num2;

    cout<<num1<<" "<<num2;
}