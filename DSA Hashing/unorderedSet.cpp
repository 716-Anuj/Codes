#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(0);
    s.insert(15);
    s.insert(4);

    for(auto it = s.begin(); it != s.end(); it++) //auto : automatically determine the datatype, it : iterator, begin : provides iterator of first element
    {
        cout<<(*it)<<endl;
    }
    cout<<"Number of Element : "<<s.size()<<endl;

    //s.clear();
    //cout<<"Number of Element : "<<s.size()<<endl;

    int key = 4;

    if(s.find(key) == s.end())
    {
        cout<<"Key not found ";
    }
    else{
        cout<<"Key is Present";
    }

    int delete_key = 15;
    s.erase(delete_key);
    int tmp;

    auto tmp = s.find(key);
    s.erase(tmp);
}