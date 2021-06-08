
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> smaleft(int arr[],int n){
    stack<int> s;
    vector<int>v;
    for(int i=0;i<n;i++){
        while(s.empty()==false && arr[s.top()]<arr[i]){
            s.pop();   
        }
        if(s.empty()){
            v.push_back(-1);
        }
        else{
            v.push_back(s.top());
        }
        s.push(i);
    }
    return v;
}

vector <int> smallright(int arr[],int n){
    vector <int> v;
    stack <int> s;
    for(int i=n-1;i>=0;i--){
        while(s.empty()==false && arr[s.top()]<arr[i]){
            s.pop();
        }
        if(s.empty()){
            v.push_back(n);
        }
        else{
            v.push_back(s.top());
        }
    }
    return v;
}

int answer(int arr[],int n){
    vector <int> v,b,wid;
    v=smaleft(arr,n);
    b=smallright(arr,n);
    reverse(b.begin(),b.end());
    for(int i=0;i<v.size();i++){
        wid[i]=b[i]-v[i]-1;
    }
    int marea=0;
    for(int i=0;i<wid.size();i++){
        marea=max(marea,wid[i]*arr[i]);
    }
    return marea;
}

int main(){
    int arr[]={6,8,5,4,5,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<answer(arr,n);
    return 0;
}
