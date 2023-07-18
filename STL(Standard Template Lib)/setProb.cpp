// Given N string, print unique strings in lexiographical order 
// N <= 10^5
// |S| <= 100000

// no map required as frequency is not asked 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    int size;
    cout<<"Enter the number of String : ";
    cin>>size;

    for(int i = 0; i < size; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }

    for(auto value : s)
    {
        cout<<value<<endl;
    }

    //Given N strings and Q queries. In each query you are given a string 
    // Print yes if present wlse print no 

    int q;
    cout<<"Enter the number of Query : ";
    cin>>q;
    while(q--)
    {
        string st;
        cin>>st;
        if(s.find(st) != s.end())
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}