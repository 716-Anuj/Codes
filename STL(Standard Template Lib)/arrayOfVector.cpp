#include<bits/stdc++.h>
using namespace std;

void printVect(vector<int> &v)
{
    cout<<"Size : "<<v.size()<<endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    int N;
    cout<<"Enter the number of Vectors required : ";
    cin>>N;
    vector<int> v[N]; // 10 vectors of zero size

    // Taking input of each vector

    for(int i = 0; i < N; i++)
    {
        int n; //Inside vector individual size
        cin>>n;
        for(int j = 0; j < n; j++)
        {
            int x; // elements of an array;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i = 0; i < N; i++)
    {
        printVect(v[i]);
    }
}