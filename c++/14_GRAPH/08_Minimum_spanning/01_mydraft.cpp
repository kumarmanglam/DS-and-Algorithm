#include<bits/stdc++.h> 
#include<climits>
using namespace std;
//minimum spanning tree
//we can use min heap priority queue
int spanning (int sr,vector<pair<int,int> adj[],int v){
    vector<int> vis(v,0);
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
    q.push({sr.second,sr.first});
    vis[sr]=1;
    int ans=0;
    for(int i=0;i<v;i++){
        int u=q.front();
        while(!q.empty()){
            q.pop();
        }
        ans+=q.second();
        for(auto it: adj[u]){
            if(vis[it]==0){
                q.push(it.second,it.first);
            }
        }
    }
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
    cout<<spanning(0,adj,nodes);

    return 0;
}
