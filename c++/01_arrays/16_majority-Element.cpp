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
//this program exceeds time limit
int majoritself(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    int res=0,element=-1;
    for (int  i = 0; i < n; i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>=res){
            element =arr[i];
        }
        res=max(res,count);
    }
    if(res>n/2){
        return element;
    }
    return -1;
}
//Function that returns index of the majority element - seen gfg video *** method 1 *** O(N^2) time 
int majoriIndex(int arr[],int n){
    if(n==1){
        return -1;
    }
    for (int  i = 0; i < n; i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            return i;
        }
    }
    return -1;
}
//moore's voting 
int majormoore(int arr[],int n){
    int res=0,count=1;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i])
            count++;
        else count--;
        if(count==0){
            count=1;
            res=i;
        }
    }
    //second phase of code that confirms that if the element is majority
    count=0;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i])
            count++;
    }
    if(count<=n/2)
        return -1;
    return arr[res];

}
//efficient solution
int main(){
    int arr[]={1,4,13,13,13,13,13,38};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<majormoore(arr,n)<<endl;
  return 0;
}