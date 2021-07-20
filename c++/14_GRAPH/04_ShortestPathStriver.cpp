#include<bits/stdc++.h> 
#include<climits>
using namespace std;
//shortest path unit weight undirected bfs method
vector<int> dis(vector<int> adj[],int v){
    vector<int> dist(v,INT_MAX);
    queue<int> q;
    q.push(0);
    dist[0]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto it: adj[u]){
            if(dist[it]==INT_MAX){
                dist[it]=dist[u]+1;
                q.push(it);
            }
        }
    }
    return dist;
}



void addnode(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    int nodes=6;
    vector<int> adj[nodes];
    addnode(adj,2,3);
    addnode(adj,3,1);
    addnode(adj,4,0);
    addnode(adj,4,1);
    addnode(adj,5,0);
    addnode(adj,5,2);
    vector<int> ans;
    ans=dis(adj,nodes);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}
