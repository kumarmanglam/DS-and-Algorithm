#include<bits/stdc++.h> 
using namespace std;
// Print number of islands in a graph (or number of connected components in a graph).
//count components of graph
void bfs(vector<int>v[],int s,bool visited[]){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int x: v[u]){
            if(visited[x]==false){
                visited[x]=true;
                q.push(x);
            }
        }
    }
}
int bfsin(vector<int> v[],int n, int s){
    int count=0;
    bool visited[n];
    for(int i=0;i<n;i++)
        visited[i]=false;
    for(int i=0;i<n;i++){
        if(visited[i]==false){
            count++;
            bfs(v,i,visited);//source changes constantly
        }
    }
    return count;
}
void addEdge(vector<int> v[],int a ,int b){
    v[a].push_back(b);
    v[b].push_back(a);
}

int main(){
    int v=7;
    vector<int> adj[v];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,4,5);
	addEdge(adj,5,6);
	addEdge(adj,4,6);
	
	cout<<"Components of Graph calculated by bfs is: \n";
	cout<<bfsin(adj,v,0);
	return 0;
}
