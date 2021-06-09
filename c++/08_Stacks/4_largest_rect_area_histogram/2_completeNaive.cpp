#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
//find adjacent smaller to all
vector <int> smaleft(int arr[],int n){
    stack<int> s;
    vector<int>v;
    s.push(arr[0]);
    v.push_back(-1);
    for(int i=1;i<n;i++){
        while(s.empty()==false && arr[s.top()]>arr[i]){
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
    v.push_back(n);
    s.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(s.empty()==false && arr[s.top()]>arr[i]){
            s.pop();
        }
        if(s.empty()){
            v.push_back(n);
        }
        else{
            v.push_back(s.top());
        }
        s.push(i);
    }
    return v;
}

vector <int> width(int arr[],int n){
    vector <int> nsl , nsr , wid;
    nsl=smaleft(arr,n);
    nsr=smallright(arr,n);
    reverse(nsr.begin(),nsl.end());
    for(int i=0;i<n;i++){
        wid[i]=nsr[i]-nsl[i]-1; 
    }
    return wid;
}

int main(){
    int arr[]={6,2,5,4,1,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> nsl,nsr,wid;
    nsl=smaleft(arr,n);
    nsr=smallright(arr,n);
    wid=width(arr,n);
    reverse(nsr.begin(),nsr.end());
    for(int i=0;i<nsl.size();i++){
        cout<<arr[i]<<"  ";
    }
    cout<<"\n";
    for(int i=0;i<nsl.size();i++){
        cout<<nsl[i]<<"  ";
    }
    cout<<"\n";
    for(int i=0;i<nsl.size();i++){
        cout<<nsr[i]<<"  ";
    }
    cout<<"\n";
    for(int i=0;i<nsl.size();i++){
        cout<<wid[i]<<"  ";
    }
    cout<<"\n";
    return 0;
}
