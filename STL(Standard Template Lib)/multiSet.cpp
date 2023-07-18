#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    for(auto value : s)
    {
        cout<<value<<endl;
    }
}

int main()
{
    multiset<string> s;
    int size;
    cout<<"Enter the number of String : ";
    cin>>size;

    for(int i = 0; i < size; i++)  //logn
    {
        string str;
        cin>>str;
        s.insert(str);
    }

    print(s);

    cout<<"Deleting single string"<<endl;

    auto it = s.find("bab");
    if(it != s.end())
    {
        s.erase(it);
    }
    print(s);
}