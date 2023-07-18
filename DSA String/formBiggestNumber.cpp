#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str = "123987";
    sort(str.begin(), str.end(), greater<int>());
    cout<<str;
}