#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph[N][N];

int main(){
    int n_vertices, m_edges;
    cin>>n_vertices>>m_edges;

    for(int i = 0; i < m_edges; i++){
        int v1, v2;
        cin>>v1>>v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
}