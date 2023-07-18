#include<bits/stdc++.h>
using namespace std;

string reverse(string str, int index, int size)
{
    if(index > size)
    {
        return str;
    }
    swap(str[index], str[size]);
    return reverse(str, index+1, size-1);
}

int main()
{
    string str;
    cout<<"Enter the string to be reversed : ";
    cin>>str;

    int size = str.length();
    cout<<reverse(str, 0, size-1);
}