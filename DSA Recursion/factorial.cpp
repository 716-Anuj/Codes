#include<bits/stdc++.h>
using namespace std;

int func(int num)
{
    if(num == 0)
    {
        return 1;
    }
    return func(num-1) * num;

}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    //Factorial

    cout<<func(num);
}