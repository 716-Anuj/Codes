#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<string, string>, vector<int>> m;
    int N;
    cout<<"Enter the number of Student : ";
    cin>>N;
    for(int i = 0; i < N; i++)
    {
        string fn, ln;
        int count;
        cin>>fn>>ln>>count;
        for(int j = 0; j < count; j++)
        {
            int x;
            cin>>x;
            m[{fn, ln}].push_back(x);
        }
    }
    for(auto &pr : m)
    {
    //     auto &full_name = pr.first;
    //     auto &list = pr.second; 
        cout<<pr.first.first<<" "<<pr.first.second<<endl;
        cout<<pr.second.size()<<endl;
        for(auto &list : pr.second)
        {
            cout<<list<<endl;
        }
    cout<<endl;
    }
}