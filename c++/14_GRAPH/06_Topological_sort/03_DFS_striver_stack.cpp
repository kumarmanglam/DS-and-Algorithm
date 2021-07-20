#include<bits/stdc++.h> 
using namespace std;
//Topological sort is applicable to only on DAG
//DFS topo sort dfs striver

void topological(int sr,vector<int> adj[],vector<int> &vis,stack<int> &s){
    vis[sr]=1;
    for(auto it: adj[sr]){   
        if(!vis[it]){
            topological(it,adj,vis,s);
        }
    }
    s.push(sr);//push to stack after calling all the all the adjacents 
}

vector<int> toposort(vector<int> adj[],int v){
    vector<int> vis(v,0);
    stack<int> s;
    for(int i=0;i<v;i++){
        if(vis[i]==0){
            topological(i,adj,vis,s);
        }
    }
    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
        
    }
    return ans;
}

void addnode(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
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
    ans=toposort(adj,nodes);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}
