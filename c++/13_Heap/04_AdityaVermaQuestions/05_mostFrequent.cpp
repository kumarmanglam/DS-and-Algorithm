#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;
//top k frequent numbers
//store the frequency of elements in hash map

//we have to make map before pushing to the heap because if not we will push same element multiple times
//and then we iterative the map to push into heap
void mostfrequent(int arr[],int n,int k){
    unordered_map<int,int> m;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > p;
     for(int i=0;i<n;i++)
        m[arr[i]]++;
    for(auto it=m.begin();it!=m.end();it++){
        p.push({it->second,it->first});
        if(p.size()>k){
            p.pop();
        }
    }
    
    while(!p.empty()){
        cout<<p.top().second<<" ";
        p.pop();
    }
    return ;
}


int main(){
    int arr[]={9,8,7,7,4,3,3,3,3,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    
    mostfrequent(arr,n,k);
    
    return 0;
}
