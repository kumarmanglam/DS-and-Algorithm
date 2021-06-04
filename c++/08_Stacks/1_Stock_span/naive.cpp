#include <bits/stdc++.h> 
using namespace std; 

int *stockspan(int *arr){
    int n=sizeof(arr)/sizeof(arr[0]);
    static int output[12]; //here we get size not specified error;
    int i=1,j=0,curr=0,count;
    for(int i=0;i<n;i++){
        curr=arr[i];
        count=1;
        for(int j=i;j>=0;j--){
            if(arr[j]<curr){
                count++;
            }
            else break;
        }
        output[i]=count;
    }
    return output;
}

//convert this function to vector algorithm

int main(){
    int arr[]={13,12,15,14,16,8,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int *output;
    output=stockspan(arr);
    for(int i=0;i<n;i++){
        cout<<*(output+i)<<" ";
    }
    return 0;
}
