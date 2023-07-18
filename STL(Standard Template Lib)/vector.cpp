#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout<<"Size of Array : "<<v.size()<<endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void printVec1(vector<int> v)
{
    cout<<"Size of Array : "<<v.size()<<endl;
    v.pop_back();
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[10]; //10 blocks are reserved
    vector<int> v; // initially 0 block
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    for(int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVec(v);
    v.pop_back();
    printVec(v);
    vector<int> v2 = v; //Order of N
    v2.push_back(10);
    printVec(v2);

    vector<int> &v3 = v; //Actual vector not the copy one
    v3.push_back(10);
    printVec1(v3);

}