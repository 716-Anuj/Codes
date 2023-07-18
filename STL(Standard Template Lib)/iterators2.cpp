//Range based loops and auto keyword
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 5, 6, 7};
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>  :: iterator it; // in place of this we can use auto with it in for loop
    for(it = v.begin(); it != v.end(); it++)
    {
        cout<<(*(it))<<" ";
    } 
    cout<<endl;

    //for(int &val : v) => actual value
    for(int val : v) //Range based loops => copy value
    {
        cout<< val<<" ";
    }
    cout<<endl;

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}};
    for(pair<int, int> &val : v_p) // in place of this we can use auto with it in for loop
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
}