#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> graph[N];
bool visited[N] = {0};

void dfs(int vertex){
    cout<<vertex<<endl;
    visited[vertex] = true;
    // Take action on Vertex after entering the vertex 

    for(int child : graph[vertex]){
        cout<<"par "<<vertex<<", child"<<child<<endl;
        if(visited[child]) continue;
        // Take action on vertex before entering the child node 

        dfs(child);
        
        // take action on child after exiting the child node   
    }
    // return isLoopExist;
    // Take action onn child before exiting the child node 
}

int main(){
    int n_vertices, m_edges;
    cin>>n_vertices>>m_edges;

    for(int i = 0; i < m_edges; i++){
        int v1, v2;
        cin>>v1>>v2;

        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(n_vertices);
}