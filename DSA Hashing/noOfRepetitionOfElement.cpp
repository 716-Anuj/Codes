#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> umap; //first int = arr[i] and second int = count

    int arr[] = {2, 3, 4, 2, 3, 6, 7, 9, 7, 9, 0};
    
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; i++)
    {
        int key = arr[i];
        umap[key]++;  //Initial count = 0
    }

    for(auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}