#include <iostream>
#include<vector>
#include<stack>
using namespace std;

//return type vector
vector<int> previousgreater(int arr[],int n){
    stack <int> s;
    vector <int> v;
    for(int i=0;i<n;i++){
        int index=0;
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        index=s.empty()? -1: s.top();
        if(s.empty()){
            v.push_back(-1);
        }
        else{
            v.push_back(arr[index]);
        }
        s.push(i);
    }
    return v;
}

int main(){
    int arr[]={1,45,23,11,10,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    v=previousgreater(arr,n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
    return 0;
}
