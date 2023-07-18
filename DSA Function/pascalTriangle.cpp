#include<iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1 ;
    for(int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

void pascal(int rows)
{
    int n = 0, r = 0, fact1, fact2, fact3;
    float result;
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            fact1 = fact(n);
            fact2 = fact(r);
            fact3 = fact(n-r);

            result = (float)fact1/(fact2 * fact3);
            cout<<result<<" ";
            if(n == r)
            {
                cout<<endl;
                r = 0;
                n++;
            }
            else{
                r++;
            }
        }
    }

}

int main()
{
    int rows; 
    cout<<"Enter the number of Rows : ";
    cin>>rows;

    pascal(rows);
}