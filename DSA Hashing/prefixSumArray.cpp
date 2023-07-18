#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {10, 20, 30 , 15, 10};
    int psa[5];
    for(int i = 0; i < 5; i++)
    {
        if(i == 0)
        {
            psa[i] = a[i];
        }
        else{
            psa[i] = a[i] + psa[i-1];
        }
    }
    for(int i = 0; i < 5; i++)
    {
        cout<<psa[i]<<" ";
    }
}