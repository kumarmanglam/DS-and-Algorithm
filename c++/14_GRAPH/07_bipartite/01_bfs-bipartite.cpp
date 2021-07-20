#include<bits/stdc++.h> 
using namespace std; 


    bool bipartite(int src,vector<int> adj[],int color[]){
        color[src]=1;
        queue<int>q;
        q.push(src);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it: adj[node]){
                if(color[it]==-1){
                    color[it]=1-color[node];
                    q.push(it); 
                }
                else if(color[it]==color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    
    bool bipartiteongraph(vector<int> adj[],int n){
        int color[n];
        memset(color,-1,n);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(bipartite(i,adj,color)){
                    return true;
                }
            }
        }
        return false;
    }

void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 
   
void printGraph(vector<int> adj[], int V) 
{ 
    for (int i = 0; i < V; i++) 
    { 
        for (int x : adj[i]) 
           cout << x <<" "; 
        cout<<"\n"; 
    } 
} 
  
// Driver code 
int main() 
{ 
    int V = 4; 
    vector<int> adj[V]; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 2); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    
    cout<<bipartiteongraph(adj,V);
    return 0; 
} 
