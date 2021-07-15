#include<bits/stdc++.h> 
using namespace std; 
void dfsrec(vector<int> adj[],int s,bool visited[]){
    visited[s]=true;
    cout<< s << " ";
    
    for(int u: adj[s]){
        if(visited[u]==false){
            dfsrec(adj,u,visited);
        }
    }
}

void dfs(vector<int> adj[],int v){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(!visited[i])
            dfsrec(adj,i,visited);
    }
}

void addEdge(vector<int> adj[], int a, int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

int main() 
{ 
	int n=5;
	vector<int> adj[n];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2);
	addEdge(adj,3,4);

	cout << "Following is Depth First Traversal: "<< endl; 
	dfs(adj,n); 

	return 0; 
} 
