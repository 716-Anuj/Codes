#include<iostream>
using namespace std;
int main()
{
    int a;
    int i = 1, j = 2, k = 3;

    a = i-- - j-- - k--;
    cout<<a<<endl<<i<<endl<<j<<endl<<k;
}