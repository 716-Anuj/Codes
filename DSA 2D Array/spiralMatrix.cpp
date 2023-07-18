//Spiral Matrix
#include <iostream>
using namespace std;

int main()
{
    int row_size, col_size;
    cout << "Enter row and column size of a Matrix: ";
    cin >> row_size >> col_size;
    int mat[row_size][col_size];

    cout << "Enter the elements of the Matrix: ";
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    int row_start = 0, row_end = row_size - 1, col_start = 0, col_end = col_size - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        for (int col = col_start; col <= col_end; col++)
        {
            cout << mat[row_start][col] << " ";
        }
        row_start++;

        for (int row = row_start; row <= row_end; row++)
        {
            cout << mat[row][col_end] << " ";
        }
        col_end--;

        if (row_start <= row_end) 
        {
            for (int col = col_end; col >= col_start; col--)
            {
                cout << mat[row_end][col] << " ";
            }
            row_end--;
        }

        if (col_start <= col_end) 
        {
            for (int row = row_end; row >= row_start; row--)
            {
                cout << mat[row][col_start] << " ";
            }
            col_start++;
        }
    }

    return 0;
}