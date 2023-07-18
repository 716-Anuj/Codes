#include<bits/stdc++.h>
using namespace std;

void permute(string &str, int index, int size)
{
    if(index == size)
    {
        cout<<str<<endl;
        return;
    }
    else{
        for(int i = index; i <= size; i++)
        {
            swap(str[index], str[i]);
            permute(str, index+1, size);
            swap(str[index], str[i]); //Backtracking
        }
    }
}

int main()
{
    string str;
    cout<<"Enter the String : ";
    cin>>str;

    int size = str.length();
    permute(str, 0, size-1);
    return 0;
}