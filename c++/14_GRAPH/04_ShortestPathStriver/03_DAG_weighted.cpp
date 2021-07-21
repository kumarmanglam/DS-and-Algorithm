 #include<bits/stdc++.h> 
#include<climits>
using namespace std;
//shortest path in DAG weigted

void topo(int sr,vector<pair<int,int>>adj[] ,vector<int> &vis,stack<int> &s){
    vis[sr]=1;
    for(auto it: adj[sr]){
        if(vis[it.first]==0){
            topo(it.first,adj,vis,s);
        }
    }
    s.push(sr);
}

vector<int> dis(int sr,vector <pair<int,int>> adj[],int v){
    stack<int> s;
    vector<int> vis(v,0);
    for(int i=0;i<v;i++){
        topo(i,adj,vis,s);
    }
    vector<int> dis(v,1e9);
    dis[sr]=0;
    while(!s.empty()){
        int u=s.top();
        s.pop();
        if(dis[u]!=1e9){
            for(auto it: adj[u]){
                if(dis[it.first]>dis[u]+it.second){
                    dis[it.first]=dis[u]+it.second;
                }
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
    ans=dis(0,adj,nodes);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}
