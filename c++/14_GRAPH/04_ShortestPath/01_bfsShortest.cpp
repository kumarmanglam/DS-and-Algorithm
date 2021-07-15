#include<bits/stdc++.h> 
using namespace std;

void bfs(vector<int> v[],int n,int s,int dist[]){
    bool visited[n];
    for(int i=0;i<n;i++)
        visited[i]=false;
    queue <int> q;
    q.push(s);
    visited[s]=true;
    
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int x:v[u]){
            if(visited[x]==false){
                dist[x]=dist[u]+1;
                visited[x]=true;
                q.push(x);
            }
        }
    }
}

void addEdge(vector<int> v[],int a, int b){
    v[a].push_back(b);
    v[b].push_back(a);
}
int main() 
{ 
	int V=4;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,0,2); 
	addEdge(adj,1,3);
    int dist[V];
    for(int i=0;i<V;i++){
        dist[i]=INT_MAX;
    }
	dist[0]=0;
	bfs(adj,V,0,dist); 
    
    for(int i=0;i<V;i++){
        cout<<dist[i]<<" ";
    }

	return 0; 
} 

