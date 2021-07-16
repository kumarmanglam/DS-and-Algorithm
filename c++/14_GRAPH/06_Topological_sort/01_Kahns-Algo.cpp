#include<bits/stdc++.h> 
using namespace std;
//topological sorting - BFS
//creating indegree array is quite simple
void topologicalsort(vector<int> adj[],int n){
    vector<int> in_degree(n,0);
    
    for(int u=0;u<n;u++){
        for(int x:adj[u])
            in_degree[x]++;
    }
    
    queue<int> q;
    for(int i=0;i<n;i++){
        if(in_degree[i]==0)
            q.push(i);
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        
        for(int x:adj[u])
            if(--in_degree[x]==0)
                q.push(x);
    }
}

void addEdge(vector<int> v[],int a, int b){
    v[a].push_back(b);
}
int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 2); 
    addEdge(adj,0, 3); 
    addEdge(adj,1, 3); 
    addEdge(adj,1, 4); 
    addEdge(adj,2, 3);  
  

    topologicalsort(adj,V);

	return 0; 
} 

