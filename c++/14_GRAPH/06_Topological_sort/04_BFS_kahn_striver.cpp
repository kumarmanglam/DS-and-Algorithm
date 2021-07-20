#include<bits/stdc++.h> 
using namespace std;
//Topological sort is applicable to only on DAG
//BFS topo sort dfs striver - Kahn's algorithm
vector<int> topokahn(vector<int> adj[],int v){
    vector<int> indeg(v,0);
    for(int i=0;i<v;i++){
        for(auto it: adj[i]){
            indeg[it]++;
        }
    }
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indeg[i]==0){
            q.push(i);
        }
    }
    vector<int> ans;
    while(!q.empty()){
        int u=q.front();
        ans.push_back(u);
        q.pop();
        for(auto it: adj[u]){
            indeg[it]--;
            if(indeg[it]==0){
                q.push(it);
            }
        }
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
    ans=topokahn(adj,nodes);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}
