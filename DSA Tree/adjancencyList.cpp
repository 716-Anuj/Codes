#include<bits/stdc++.h>
#include <vector>
using namespace std;

const int N = 1e3+10;
vector<pair<int, int>>graph[N];

int main(){
    int n_vertices, m_edges;
    cin>>n_vertices>>m_edges;

    for(int i = 0; i < m_edges; i++){
        int v1, v2, wt;
        cin>>v1>>v2>>wt;

        graph[v1].push_back({v2, wt});
        graph[v2].push_back({v1, wt});
    }
}