#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    vector<int> v(size);
    cout<<"Enter the Element : ";
    for(int i = 0; i < size; i++)
    {
        cin>>v[i];
    }

    //Minimum Element

    int min = *min_element(v.begin(), v.end());
    cout<<"Minimum : "<<min<<endl;

    //Maximum Element

    int max = *max_element(v.begin(), v.end()-1);
    cout<<"Maximum : "<<max<<endl;

    //Accumulator

    int sum = accumulate(v.begin(), v.end(), 0);
    cout<<"Sum : "<<sum<<endl;

    //Count

    int ct = count(v.begin(), v.end(), 3);
    cout<<"Count : "<<ct<<endl;

    //Find

    int fd = *find(v.begin(), v.end(), 3);
    cout<<"Find : "<<fd<<endl;

    //Reverse
    //reverse(v, v + size);
    reverse(v.begin(), v.end());
    for(auto val : v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    
}