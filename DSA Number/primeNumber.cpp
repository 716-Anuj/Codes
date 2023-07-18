#include<iostream>
using namespace std;
int main()
{
    int number, k;
    int flag = 0;
    cout<<"Enter a positive integer except 1 for lower limit : ";
    cin>>k;
    cout<<"Enter a positive integer except 1 for upper limit : ";
    cin>>number;

    x : for(int i = 2; i < k; i++)
    {
        if(k == 2)
        {
            flag = 0;
        }
        else if(k % i == 0)
        {
            flag = 1;
            break;
        }
        else{
            flag = 0;
        }

    }
    if(flag == 0)
    {
        cout<<k<<" ";
    }
    k++;
    if(k < number)
    goto x;
}