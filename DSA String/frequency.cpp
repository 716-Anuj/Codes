#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "anujpradhan";
    int freq[26];

    for(int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for(int i = 0; i < str.size(); i++)
    {
        freq[str[i] -'a']++;
    }

    char ans = 'a';

    for(int i = 0; i < 26; i++)
    {
        if(freq[i] > 0)
        {
            cout<<ans<<" : "<<freq[i]<<endl;
        }
        ans++;
    }
}