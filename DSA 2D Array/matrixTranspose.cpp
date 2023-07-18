// Given a square matrix A & its number of rows (or columns) N, return the transpose of A.
// The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix
#include<iostream>
using namespace std;

int main()
{
    int row_size;
    cout<<"Enter the row size of the Square Matrix : ";
    cin>>row_size;

    int mat[row_size][row_size];
    cout<<"Enter the elements of the Matrix : ";
    for(int i = 0; i < row_size; i++)
    {
        for(int j = 0; j < row_size; j++)
        {
            cin>>mat[i][j];
        }
    }

    for(int i = 0; i < row_size; i++)
    {
        for(int j = i; j < row_size; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    for(int i = 0; i < row_size; i++)
    {
        for(int j = 0; j < row_size; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}