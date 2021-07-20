#include<bits/stdc++.h> 
#include<climits>
using namespace std;
//shortest path in weighted undirected bfs method
vector<int> dis(vector<pair<int,int>> adj[],int v){
    vector<int> dist(v,INT_MAX);
    queue<int> q;
    q.push(0);
    dist[0]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto it: adj[u]){
            if(dist[u]+it.second<dist[it.first]){
                dist[it.first]=dist[u]+it.second;
                q.push(it.first);
            }
        }
    }
    return dist;
}



void addnode(vector<pair<int,int>> adj[],int u,int v,int w){
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}

int main(){
    int nodes=5;
    vector<pair<int,int>> adj[nodes];
    addnode(adj,0,1,10);
    addnode(adj,0,2,4);
    addnode(adj,1,4,7);
    addnode(adj,4,3,5);
    addnode(adj,2,3,3);
    vector<int> ans;
    ans=dis(adj,nodes);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}
