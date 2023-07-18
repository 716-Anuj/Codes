// Given an array of names (consisting of lowercase characters) of candidates in an election.
// A candidate name in array represents a vote casted to the candidate. Print the name of candidate
// that receive max votes.If there is tie, print lexicographically smaller name.
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

vector<string> winner(string arr[], int size)
{
    unordered_map<string, int> umap;
    for(int i = 0; i < size; i++)
    {
        umap[arr[i]]++;
    }

    string name = "";
    int max_vote = 0;

    for(auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        string key = itr->first;
        int value = itr->second;

        if(value > max_vote)
        {
            max_vote = value;
            name = key;
        }
        else if(value == max_vote)
        {
            if(key < name)
            {
                name = key;
            }
        }
    }
}

int main()
{
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    string arr[size];

    cout<<"Enter the alements of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    winner(arr, size);
}
