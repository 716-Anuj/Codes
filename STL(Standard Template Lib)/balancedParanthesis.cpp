#include<bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbol = {{'[', -1}, {'{', -2}, {'(', -3},{']', 1}, {'}', 2}, {')', 3} };

string isBalanced(string str)
{
    stack<char> st;
    for(char bracket : str)
    {
        if(symbol[bracket] < 0)
        {
            st.push(bracket);
        }
        else{
            if(st.empty())
            return "No";
            char top = st.top();
            st.pop();
            if(symbol[top] + symbol[bracket] != 0)
            {
                return "No";
            }
        }
    }
    if(st.empty())
    {
        return "Yes";
    }
    else{
        return "No";
    }
}

int main()
{
    int N;
    cout<<"Enter number of String : ";
    cin>>N;

    while(N--)
    {
        string str;
        cin>>str;
        cout<<isBalanced(str)<<endl;
    }
}