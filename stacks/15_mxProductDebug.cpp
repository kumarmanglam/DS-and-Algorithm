#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
stack <pair<long,long>> s;
vector <long> rr;
stack <pair<long,long>> ss;
vector <long> v;
vector<long>a;
void nearestgreatertoright(long arr[],long n){
    for(long i=n-1;i>=0;i--){
        if(s.size()==0)
            rr.push_back(0);
        else if(s.size()>0 && s.top().first>arr[i]){
            rr.push_back(s.top().second+1);}
        else if(s.size()>0 && s.top().first<=arr[i]){
            while (s.size()>0 && s.top().first<=arr[i])
                s.pop();
            if(s.size()==0)
                rr.push_back(0);
            else {
                rr.push_back(s.top().second+1);}
        }
    s.push({arr[i],i});
    }
}

void nearestgreatertoleft(long arr[],long n){
    for(long i=0;i<n;i++){
        if(ss.size()==0)
            v.push_back(0);
        else if(ss.size()>0 && ss.top().first>arr[i]){
            v.push_back(ss.top().second+1);}
        else if(ss.size()>0 && ss.top().first<=arr[i]){
            while (ss.size()>0 && ss.top().first<=arr[i])
                ss.pop();
            if(ss.size()==0)
                v.push_back(0);
            else {
                v.push_back(ss.top().second+1);
            }
        }
    ss.push({arr[i],i});
    }
}

long mxiproduct(long arr[],long n){

    nearestgreatertoright(arr,n);//R[i]
    reverse(rr.begin(),rr.end());

    nearestgreatertoleft(arr,n);//L[i]

    long long mx=0;
    for(long i=0;i<n;i++){//maxinp[i] array
        mx=max(mx,(long long)rr[i]*v[i]);}
    return mx;
}

int main(){
    long n;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++){
        cin>>a[i];}
    cout<<mxiproduct(a,n);
}