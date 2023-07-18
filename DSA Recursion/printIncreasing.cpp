#include<bits/stdc++.h>
using namespace std;

void printInc(int num)
{
    if(num == 0)
    {
        return;
    }
    else{
        printInc(num - 1);
        cout<<num<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    printInc(num);
}