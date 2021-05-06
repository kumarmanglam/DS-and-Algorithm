//7:34 brute force
#include <iostream>
using namespace std;
//naive solution O(n^2) ***method 1
int evenodd(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int cur=1;
        for(int j=i+1;j<n;j++){
            if((arr[j]%2==0 & arr[j-1]%2==1) || (arr[j]%2==1 & arr[j-1]%2==0)){
                cur++;
            }
            else break;
        }
        res=max(cur,res);
    }
    return res;
}
//effecient method based on kadane's algorithm ***method 2
int longestevenodd(int arr[],int n){
    int res=1,cur=1;
    for(int j=1;j<n;j++){
        if((arr[j]%2==0 & arr[j-1]%2==1) || (arr[j]%2==1 & arr[j-1]%2==0)){
            cur++;
            res=max(res,cur);
        }
        else cur=1;
    }
    return res;
}
//efficient approach with sum logic ***method 3
int evenoddsum(int arr[],int n){
    int res=1,cur=1;
    for(int i=1;i<n;i++){
        if((arr[i-1]+arr[i])%2==1){
            cur++;
        }
        else{
            res=max(res,cur);
            cur=1;
        }
    }
    return max(res,cur);
}
int main(){
    int arr[]={1,2,3,4,5,32,2,4,32,2,4,3,4,5,3,54,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<evenoddsum(arr,n)<<endl;
    return 0;
}

//copied method 2 with some changes
/**
//effecient method based on kadane's algorithm
int longestevenodd(int arr[],int n){
    int res=1,cur=1;
    for(int j=1;j<n;j++){
        if((arr[j]%2==0 & arr[j-1]%2==1) || (arr[j]%2==1 & arr[j-1]%2==0)){
            cur++;
        }
        else {
            res=max(res,cur);
            cur=1;
        }
    }
    return max(res,cur);
}
*/