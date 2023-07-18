#include<bits/stdc++.h>
using namespace std;

int main()
{
    char A = 'B';
    char a = A | (1 << 5);  // A -> a
    cout<<a<<endl; 
    cout<<(char)(a & (~(1 << 5)))<<endl;
    cout<<(char)(1<<5)<<endl; //Space
    cout<<(char)('C' | ' ')<<endl; //coonvert to lower case

    // lowercase & underscore -> uppercase

    cout<<char('c' & '_')<<endl; //convert to uppercase
}