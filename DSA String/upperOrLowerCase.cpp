#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str = "AnujPradhan";

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else{
            str[i] += 32;
        }
    }

    cout<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), :: toupper);
    cout<<str<<endl;
}