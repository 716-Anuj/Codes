// #include<iostream>
// using namespace std;

// void binaryCoefficient(int n, int r)
// {
//     int fact = 1, fact1 = 1, fact2 = 1;
//     float result;
//     for(int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }

//     for(int i = 1; i <= r; i++)
//     {
//         fact1 = fact1 * i;
//     }

//     for(int i = 1; i <= n-r; i++)
//     {
//         fact2 = fact2 * i;
//     }
//     result = (float) fact/(fact1 * fact2);
//     cout<<result;
// }

// int main()
// {
//     int n, r;
//     cout<<"Enter the value of n and r of the Binary Coefficient : ";
//     cin>>n>>r;
//     binaryCoefficient(n, r);
// }

#include<iostream>
using namespace std;

int fact(int n)
{
    int fact2 = 1;
    for(int i = 1; i <= n; i++)
    {
        fact2 = fact2 * i;
    }
    return fact2;
}

int main()
{
    int n, r;
    float result;
    cout<<"Enter the value of n and r for Binary Coefficient : ";
    cin>>n>>r;
    int fact1 = fact(n);
    int fact3 = fact(r);
    int fact4 = fact(n - r);

    result = (float)fact1/(fact3 * fact4);
    cout<<result;
}