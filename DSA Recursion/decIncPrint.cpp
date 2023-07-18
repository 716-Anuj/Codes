#include<bits/stdc++.h>
using namespace std;

void print(int num)
{
    if(num == 0)
    {
        return;
    }
    else{
        cout<<num<<endl;
        print(num-1);
        cout<<num<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    print(num);
}