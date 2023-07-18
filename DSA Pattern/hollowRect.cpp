#include<iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout<<"Enter number of Rows and Columns : ";
    cin>>rows>>columns;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(i == 0 || i == rows - 1)
            {
                cout<<"*";
                continue;
            }
            if(j == 0 || j == columns - 1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}