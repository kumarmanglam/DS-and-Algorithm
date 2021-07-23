#include<bits/stdc++.h> 
using namespace std;
//minimum spanning tree - prims naive approach 

void prim(vector<pair<int,int>> adj[],int v){
    
    int parent[v],key[v];
    bool mst[v];
    for(int i=0;i<v;i++)
        mst[i]=false,key[i]=1e9;
    priority_queue < pair<int,int>,vector <pair<int,int>>,greater<pair<int,int>> >pq;
    key[0]=0;
    parent[0]=-1;
    pq.push({0,0});
    
    while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();
        
        mst[u]=true;
        
        for(auto it : adj[u]){
            int v=it.first;
            int weight=it.second;
            if(mst[v]==false && weight < key[v]){
                parent[v]=u,key[v]=weight;
                pq.push({key[v],v});
            }
        }
    }

    
    for(int i=1;i<v;i++){
        cout<<i<<" - "<<parent[i]<<" \n";
    }
    return ;
}



void addnode(vector <pair<int,int>> adj[],int u,int v,int w){
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}

int main(){
    int nodes=5;
    vector<pair<int,int>> adj[nodes];
    addnode(adj,0,1,100);
    addnode(adj,0,2,4);
    addnode(adj,1,4,7);
    addnode(adj,4,3,5);
    addnode(adj,2,3,10);
    
    
    prim(adj,nodes);

    return 0;
}
