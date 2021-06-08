#include <iostream>
#include <stack>
#include<vector>
#include <algorithm>
using namespace std;

vector <int> nextgreater(int arr[],int n){
    stack <int> s;
    vector<int>v;
    s.push(arr[n-1]);
    v.push_back(-1);
    for(int i=n-2;i>=0;i--){
        while(s.empty()==false && s.top()<arr[i]){
            s.pop();
        }
        if(s.empty()){
            v.push_back(-1);
        }
        else{
            v.push_back(s.top());
        }
        s.push(arr[i]);
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

//outpu === 67 67 67 -1 34 -1 
