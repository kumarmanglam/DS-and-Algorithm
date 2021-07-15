#include<bits/stdc++.h> 
using namespace std;
void addadj(vector<int> adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}
void printgraph(vector <int> v[],int n){
    for(int i=0;i<n;i++){
        for(int x: v[i] ){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    vector<int> v[4];
    addadj(v,1,2);
    addadj(v,2,0);
    addadj(v,3,1);
    printgraph(v,4);
    return 0;
}
