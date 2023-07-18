#include<bits/stdc++.h>
using namespace std;

int pal(string str, int l, int h)
{
    if(l >= h)
    {
        return 1;
    }
    if(str[l] != str[h])
    {
        return 0;
    }
    return pal(str, l+1, h-1);
}

int main()
{
    string str;
    cout<<"Enter the String : ";
    cin>>str;
    int size = str.length();
    cout<<pal(str, 0 , size-1);
}