#include<bits/stdc++.h>
using namespace std;

void printVect(vector<pair<int, int>>&v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;;
    }
} 
int main()
{
    //vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>> v;
    int size;
    cout<<"Enter the Size of the Array : ";
    cin>>size;

    for(int i = 0; i < size; i++)
    {
        int x, y;
        cin>>x>>y;
        v.push_back({x, y});
    }
    printVect(v);

}