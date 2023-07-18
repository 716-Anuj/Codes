#include<bits/stdc++.h>
using namespace std;

void zigZag(int num)
{
    if(num == 0)
    {
        return;
    }
    else{
        cout<<"Pre : "<<num<<endl;
        zigZag(num - 1);
        cout<<"In : "<<num<<endl;
        zigZag(num - 1);
        cout<<"Post : "<<num<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter a number : "; 
    cin>>num;

    zigZag(num);
}