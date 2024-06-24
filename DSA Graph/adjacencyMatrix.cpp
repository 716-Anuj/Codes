#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter number of vertices and edges : ";
    cin>>n>>m;

    int adj[n+1][m+1];
    cout<<"Enter the edges "<<endl;

    for(int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}