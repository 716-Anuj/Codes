// Given N strings, print unique strings in lexographical orderwith their freq
// N <= 10^5
// |S| <= 100
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    int size;
    cout<<"Enter the Size : ";
    cin>>size;

    cout<<"Enter the String : ";
    for(int i = 0; i < size; i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}