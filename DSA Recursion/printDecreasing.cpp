#include <bits/stdc++.h>
using namespace std;

int printDec(int num)
{
    if (num > 1)
    {
        cout << num<<endl;
        return printDec(num - 1);
    }
    else
    {
        cout<<"1"<<endl;
        return 1;
    }
}

int main()
{
    int num, dec;
    cout << "Enter a number : ";
    cin >> num;
    printDec(num);
}