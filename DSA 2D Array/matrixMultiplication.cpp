// Given two 2-D arrays of sizes n1xn2 and n2xn3. Your task is to 
// multiply these matrices and output the multiplied matrx.
#include<iostream>
using namespace std;

int main()
{
    int row1, row2, col1, col2, flag = 1;
    cout<<"Enter the row size and column size of mat1 : ";
    cin>>row1>>col1;
    cout<<"Enter the row size and column size of mat2 : ";
    cin>>row2>>col2;

    int mat[row1][col1], mat1[row2][col2];
    cout<<"Enter the elements of the 1st matrix : ";
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            cin>>mat[i][j];
        }
    }

    cout<<"Enter the elements of the 2nd matrix : ";
    for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            cin>>mat1[i][j];
        }
    }

    int mat2[row1][col2];

    if(col1 == row2)
    {
        flag = 0;
        for(int i = 0; i < row1; i++)
        {
            for(int j = 0; j < col2; j++)
            {
                mat2[i][j] = 0;
                for(int k = 0; k < row2; k++)
                {
                    mat2[i][j] += mat[i][k] * mat1[k][j];
                }
            }
        }
    }
    
    if(flag == 0)
    {
        for(int i = 0; i < row1; i++)
        {
            for(int j = 0; j < col2; j++)
            {
                cout<<mat2[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Multiplication not possible";
    }
}