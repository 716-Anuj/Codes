#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;
    //p = make_pair(2, "Anuj");
    p = {2, "Aj"};
    pair<int, string> &p1 = p;
    p1 = {3, "mj"};
    // cout<<p.first<<" "<<p.second<<endl;
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int, int> p_arr[3];
    p_arr[0] = {1, 2};
    p_arr[1] = {2, 3};
    p_arr[2] = {3, 4};
    swap(p_arr[0], p_arr[2]);
    cout<<a[0]<<endl;
    for(int i = 0; i < 3; i++)
    {
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    }

}