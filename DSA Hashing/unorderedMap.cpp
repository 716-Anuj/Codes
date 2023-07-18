#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> umap; //string : key, int : value
    umap["anuj"] = 44;
    umap["pradhan"] = 54;
    umap["srijan"] = 90;

    // for(auto x : umap)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    for(auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    string key = "srijan";

    if(umap.find(key) != umap.end())
    {
        cout<<"Key Found"<<endl;
    }
    else{
        cout<<"Key Not Found"<<endl;
    }

    if(umap.find(key) != umap.end())
    {
        auto tmp = umap.find(key);
        cout<<"Key is : "<<tmp->first<<endl;
        cout<<"Value is : "<<tmp->second<<endl;
    }

    key = "pradhan";
    umap.erase(key);

    umap.insert(make_pair("mobile", 17000));

    for(auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    cout<<umap.size()<<endl;
}
