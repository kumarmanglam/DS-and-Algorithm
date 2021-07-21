#include<bits/stdc++.h> 
#include<climits>
using namespace std;
//shortest path in DAG weigted

vector<int> dist(int src,vector <pair<int,int>> adj[],int v){
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
    vector<int> dis(v,1e9);
    
    dis[src]=0;
    q.push({0,src});
    
    while(!q.empty()){
        int u=q.top().second;
        int d=q.top().first;
        q.pop();
        
        for(auto it: adj[u]){
            if(dis[it.first]>dis[u]+it.second){
                dis[it.first]=dis[u]+it.second;
                q.push({dis[it.first],it.first});
            }
        }
    }
    return dis;
}


void addnode(vector <pair<int,int>> adj[],int u,int v,int w){
    adj[u].push_back({v,w});
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
    ans=dist(0,adj,nodes);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}
