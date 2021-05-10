#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
stack <pair<int,int>> s;
vector <int> rr;
stack <pair<int,int>> ss;
vector <int> v;
vector<int>a;
void nearestgreatertoright(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        if(s.size()==0)
            rr.push_back(-1);
        else if(s.size()>0 && s.top().first>arr[i]){
            rr.push_back(s.top().second);}
        else if(s.size()>0 && s.top().first<=arr[i]){
            while (s.size()>0 && s.top().first<=arr[i])
                s.pop();
            if(s.size()==0)
                rr.push_back(-1);
            else {
                rr.push_back(s.top().second);}
        }
    s.push({arr[i],i});
    }
}

void nearestgreatertoleft(int arr[],int n){
    for(int i=0;i<n;i++){
        if(ss.size()==0)
            v.push_back(-1);
        else if(ss.size()>0 && ss.top().first>arr[i]){
            v.push_back(ss.top().second);}
        else if(ss.size()>0 && ss.top().first<=arr[i]){
            while (ss.size()>0 && ss.top().first<=arr[i])
                ss.pop();
            if(ss.size()==0)
                v.push_back(-1);
            else {
                v.push_back(ss.top().second);
            }
        }
    ss.push({arr[i],i});
    }
}

int mxiproduct(int arr[],int n){
    nearestgreatertoright(arr,n);//R[i]
    reverse(rr.begin(),rr.end());
    for(int i=0;i<n;i++){
        if(rr[i]!=-1)
            rr[i]+=1;
        else 
            rr[i]=0;
    }
    nearestgreatertoleft(arr,n);//L[i]
    for(int i=0;i<n;i++){
        if(v[i]!=-1)
            v[i]+=1;
        else 
            v[i]=0;
    }
    long long mx=0;
    for(int i=0;i<n;i++){//maxinp[i] array
        mx=max(mx,(long long)rr[i]*v[i]);}
    return mx;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];}
    cout<<mxiproduct(a,n);
}