#include<utility>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<long> ngr(vector<long> arr){
    vector<long> v;
    stack<pair<long,long>> s;
    for(long i=arr.size()-1;i>=0;i--){
        if(s.size()==0)
        v.push_back(0);
        else if(s.size()>0 && s.top().first>arr[i])
        v.push_back(s.top().second+1);
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i])
            s.pop();
            if(s.size()==0) v.push_back(0);
            else v.push_back(s.top().second+1);
        }
        s.push({arr[i],i});
    }
    reverse(v.begin(),v.end());
    return v;
}
vector<long> ngl(vector<long> arr){
    vector<long> v;
    stack<pair<long,long>> s;
    for(long i=0;i<arr.size();i++){
        if(s.size()==0)
        v.push_back(0);
        else if(s.size()>0 && s.top().first>arr[i])
        v.push_back(s.top().second+1);
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i])
            s.pop();
            if(s.size()==0) v.push_back(0);
            else v.push_back(s.top().second+1);
        }
        s.push({arr[i],i});
    }
    return v;
}
long solve(vector<long> arr) {
    vector<long> right=ngr(arr);
    vector<long> left=ngl(arr);
    for(long i=0;i<arr.size();i++)
        arr[i]=right[i]*left[i];
    return *max_element(arr.begin(),arr.end());
}

int main(){
    int n;
    cin>>n;
    vector <long> a;
    for(int i=0;i<n;i++){
        long x;
        cin>>x;
        a.push_back(x);}
    cout<<solve(a);
}