// Given N strings and Q queries. In each query you are given a string 
// print frequency of that string 
// N <= 10^6
// |S| <= 100
// Q <= 10^6

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    int size;
    cout<<"Enter the Size : ";
    cin>>size;

    for(int i = 0; i < size; i++)
    {
        string str;
        cin>>str;
        m[str]++;
    }

    int q;
    cout<<"Enter the number of Queries : ";
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
}