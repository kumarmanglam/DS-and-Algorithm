//will continue later
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
//naive solution of next greater element 
vector <int> nextgreater(int arr[],int n){
    vector <int> v;
    v.push_back(-1);
    for(int i=n-2;i>=0;i--){
        int j;
        for(j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
                v.push_back(arr[j]);
                break;
            }
        }
        if(j==n){
            v.push_back(-1);
        }
    }
    return v;
}

int main(){
    int arr[]={45,23,11,67,10,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> v;
    v=nextgreater(arr,n);
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
