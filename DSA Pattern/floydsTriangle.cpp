#include<iostream>
using namespace std;
int main()
{
    int rows;
    int k = 1;
    cout<<"Engter the number of rows : ";
    cin>>rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}