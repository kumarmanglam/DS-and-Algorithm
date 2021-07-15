#include<bits/stdc++.h> 
using namespace std;

//detect cycle in directed graph by using dfs method

bool dfsrec(vector<int> v[],int s,bool visited[],bool recst[]){
    visited[s]=true;
    recst[s]=true;
    for(int x: v[s]){
        if(!visited[x] && dfsrec(v,x,visited,recst)==true){
            return true;
        }
        else if(recst[x]){//it is recursion stack pile
            return true;
        }
    }
    recst[s]=false;
    return false;
}
bool dfs(vector<int> v[],int n){
    bool visited[n];
    bool recst[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
        recst[i]=false;
    }
    
    for(int i=0;i<n;i++){
        if(!visited[i]){
            if(dfsrec(v,i,visited,recst)){
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
	int V=6;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,2,1); 
	addEdge(adj,2,3); 
	addEdge(adj,3,4); 
	addEdge(adj,4,5);
	addEdge(adj,5,3);

    cout<<dfs(adj,V);

	return 0; 
} 

