#include <iostream>
#include <unordered_map>
using namespace std;

//naive solution --o(n^2)-- solution
int givensum(int arr[],int n,int x){
    int res=0;
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
            curr_sum+=arr[j];
            if(curr_sum==x){
                res=max(res,j-i+1);
            }
        }
    }
    return res;
}

//efficient solution by gfg --O(N)-- 
// to know the length we use unordered map
int longestsubarray(int arr[],int n,int sum){
    unordered_map<int,int>h;
    int res=0;
    int pre_sum=0;
    for(int i=0;i<n;i++){
        pre_sum+=arr[i];
        if(pre_sum==sum)
            res=i+1;
        if(h.find(pre_sum)==h.end()){
            h[pre_sum]=i;
            //h.insert(pre_sum,i);
        }
        if(h.find(pre_sum-sum)!=h.end())
            res=max(i-h[pre_sum-sum],res);
    }
    return res;
}


//my solution --O(N)--
int findlongest(int arr[],int n,int sum){
    unordered_map<int,int>h;
    int res=0;
    int pre_sum=0;
    for(int i=0;i<n;i++){
        pre_sum+=arr[i];
        if(pre_sum==sum)
            res=i+1;
        if(h.find(pre_sum)!=h.end())
            continue;
        if(h.find(pre_sum-sum)!=h.end())
            res=max(i-h[pre_sum-sum],res);
        h[pre_sum]=i;
    }
    return res;
}

int main(){
    int arr[]={8,3,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<longestsubarray(arr,n,5);
}