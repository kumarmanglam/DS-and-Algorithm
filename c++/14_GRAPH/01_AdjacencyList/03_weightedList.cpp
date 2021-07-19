#include<bits/stdc++.h> 
using namespace std;
//directed
void insertinlist(vector <pair<int,int>>,int w,int v,int u){
  adj[v].push_back({u,w});
