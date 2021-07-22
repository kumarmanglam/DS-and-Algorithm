#include<bits/stdc++.h> 
using namespace std;
//minimum spanning tree - prims naive approach 

void prim(vector<pair<int,int>> adj[],int v){
    
    int parent[v],key[v],mst[v];
    
    for(int i=0;i<v;i++)
        mst[i]=false,key[i]=1e9;
    
    key[0]=0;
    parent[0]=-1;
    for(int i=0;i<v-1;i++){
        
        int mini=INT_MAX,u;
        
        for(int j=0;j<v;j++)      //picking smallest in from key array
            if(mst[j]==false && key[j] < mini)
                mini=key[j],u=j;

        
        mst[u]=true;
        
        for(auto it : adj[u]){
            int v=it.first;
            int weight=it.second;
            if(weight < key[v])
                parent[v]=u,key[v]=weight;
        }
    }
    
    for(int i=1;i<v;i++){
        cout<<i<<" - "<<parent[i]<<" \n";
    }
    return ;
}



void addnode(vector <pair<int,int>> adj[],int u,int v,int w){
    adj[u].push_back({v,w});
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
}#include<bits/stdc++.h> 
using namespace std;
//minimum spanning tree - prims naive approach 

void prim(vector<pair<int,int>> adj[],int v){
    
    int parent[v],key[v],mst[v];
    
    for(int i=0;i<v;i++)
        mst[i]=false,key[i]=1e9;
    
    key[0]=0;
    parent[0]=-1;
    for(int i=0;i<v-1;i++){
        
        int mini=INT_MAX,u;
        
        for(int j=0;j<v;j++)      //picking smallest in from key array
            if(mst[j]==false && key[j] < mini)
                mini=key[j],u=j;

        
        mst[u]=true;
        
        for(auto it : adj[u]){
            int v=it.first;
            int weight=it.second;
            if(weight < key[v])
                parent[v]=u,key[v]=weight;
        }
    }
    
    for(int i=1;i<v;i++){
        cout<<i<<" - "<<parent[i]<<" \n";
    }
    return ;
}



void addnode(vector <pair<int,int>> adj[],int u,int v,int w){
    adj[u].push_back({v,w});
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
