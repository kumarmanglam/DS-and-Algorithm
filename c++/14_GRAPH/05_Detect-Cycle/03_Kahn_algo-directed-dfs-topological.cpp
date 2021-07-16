#include<bits/stdc++.h> 
using namespace std;
//Cycle detect by kahn algo

bool topologicaldetect(vector<int> adj[],int n){
    int count=0;
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
        
        for(int x:adj[u])
            if(--in_degree[x]==0)
                q.push(x);
        count++;
    }
    return count!=n;
}

void addEdge(vector<int> v[],int a, int b){
    v[a].push_back(b);
}
int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 1); 
    addEdge(adj,4, 1); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 1);  
  

    cout<<topologicaldetect(adj,V);

	return 0; 
} 

