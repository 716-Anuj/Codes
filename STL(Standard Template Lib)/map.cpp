#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m; //stores in ordered way
    m[1] = "abc"; //O(log(n)) * m.size()
    m[5] = "cdc";
    m[3] = "acd";

    m.insert({4, "gfm"});

    // //map<int, string> :: iterator it;
    // for(auto it = m.begin(); it != m.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    for(auto &pair : m) //nlogn
    {
        cout<<pair.first<<" "<<pair.second<<endl;
    }

    auto it = m.find(9);
    if(it == m.end())
    {
        cout<<"No Value"<<endl;
    }
    else{
        cout<<it->first<<" "<<it->second<<endl;
    }
}