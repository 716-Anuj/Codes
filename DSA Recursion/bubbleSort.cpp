#include<bits/stdc++.h>
using namespace std;

string bubbleSort(string str, int size)
{
    if(size == 0)
    {
        return str;
    }
    cout<<str<<endl;
    for(int i = 0; i < size; i++)
    {if(str[i] > str[i+1])
    {
        swap(str[i+1], str[i]);
    }
    }
    return bubbleSort(str, size-1);
}

int main()
{
    string str;
    cout<<"Enter the String : ";
    cin>>str;

    int size = str.size();
    cout<<bubbleSort(str, size-1);
}