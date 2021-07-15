#include<bits/stdc++.h> 
using namespace std;

void bfs(vector<int>v[],int n,int s){
    bool visited[n];
    for(int i=0;i<n ;i++)
        visited[i]=false;
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int x: v[u]){
            if(visited[x]==false){
                visited[x]=true;
                q.push(x);
            }
        }
    }
}

void addEdge(vector<int> v[],int a ,int b){
    v[a].push_back(b);
    v[b].push_back(a);
}

int main(){
    int v=5;
    vector<int> adj[v];
    addEdge(adj,0,1);
	addEdge(adj,0,2); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,2,4);
	
	cout<<"Following is breadth first traversal \n";
	bfs(adj,v,0);
	return 0;
}
