#include<iostream>
using namespace std;
int main()
{
    int rows, k;
    cout<<"Enter the number of Rows : ";
    cin>>rows;
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= rows-i; j++)
        {
            cout<<"  ";
        }
        k = i;
        for(int l = 1; l <= i; l++)
        {
            cout<<k<<" ";
            k--;
        }
        k = 2;
        for(int l = 2; l <= i; l++)
        {
            cout<<k<<" ";
            k++;
        }

        cout<<endl;
    }
}