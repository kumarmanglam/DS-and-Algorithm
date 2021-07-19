x#include<bits/stdc++.h> 
using namespace std;

//BFS algorithm #striver

vector<int> bfsingraph(vector<int> adj,int v){
    vector<int> bfs;
    vector<int> vis(v+1,0); //initiating vector with 0
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            queue<int>q;
            q.push(adj[i]);
            vis[i]=true;
            while(!q.empty()){
                int x=q.front();
                q.pop();
                bfs.push_back(x);
                for(auto it:adj[x]){
                    if(!vis[it]){
                        vis[it]=true;
                        q.push(it);
                    }
                }
            }
        }
    }
}

void addnode(vector<int> adj,int v,int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    int nodes;
    vector<int> adj[nodes];
    int edges;
    cin>>edges;
    for(int i=1;i<=edges;i++){
        int u,v;
        cin>>u>>v;
        addnode(adj,v,u);
    }
    vector<int> answer;
    answer=bfsingraph(adj,nodes);
    for(auto it: adj){
        cout<<it;
    }
    return 0;
}
//run
