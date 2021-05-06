#include <iostream>
using namespace std;
//my trial - brute --- maximum frequency of a element should be greater than n/2 method 1
//this function returns number of times the majority element appears!!!  ***O(N^2)
int major(int arr[],int n){
    if(n==1){
        return -1;
    }
    int res=0;
    for (int  i = 0; i < n; i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        res=max(res,count);
    }
    if(res>n/2){
        return res;
    }
    return -1;
}
//function that returns the majority element itself O(N^2)
int majoritself(int arr[],int n){
    if(n==1){
        return -1;
    }
    int res=0,element=-1;
    for (int  i = 0; i < n; i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                if(count>=res){
                    element =arr[i];
                }
            }
        }
        res=max(res,count);
    }
    if(res>n/2){
        return element;
    }
    return -1;
}
//efficient solution
int main(){
    int arr[]={1,4,5,3,4,1,1,1,1,1,1,1,1,13,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<major(arr,n)<<endl;
  return 0;
}