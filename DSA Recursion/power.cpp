#include<bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }
    int y = a * power(a, b -1);
    return y;
}

int main()
{
    int a, b, result;
    cout<<"Enter Base and Power : ";
    cin>>a>>b;

    result = power(a, b);

    cout<<"Result : "<<result<<endl;
}