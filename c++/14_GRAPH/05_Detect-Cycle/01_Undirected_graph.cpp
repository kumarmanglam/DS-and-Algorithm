 #include<bits/stdc++.h> 
using namespace std;

bool dfsrec(vector<int> v[],int n,int s,bool visited[],int parent){
    visited[s]=true;
    for(int x: v[s]){
        if(visited[x]==false){
            if(dfsrec(v,n,x,visited,s)==true)
                return true;
        }
        else if(x!=parent)
            return true;
    }
    return false;
}
bool dfs(vector<int> adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(dfsrec(adj,v,0,visited,-1)==true){
                return true;
            }
        }
    }
    return false;
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

    cout<<dfs(adj,V,0);

	return 0; 
} 

