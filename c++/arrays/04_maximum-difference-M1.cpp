//optimised solution 
//question-find maximum b-a such that b is after a and b>a

#include <iostream>
using namespace std;
int maxidiff_m1(int arr[],int size){
    int minbefore=arr[0],ans=0;
    for(int i=1;i<size;i++){
        int b=arr[i];
        int a=minbefore;
        int temp;
        if(b>a){
            temp=b-a;
        }
        if(temp>ans){
            ans=temp;
        }
        //update minbefore
        if(arr[i]<minbefore){
            minbefore=arr[i];
        }
    }
    return ans;
}
//optimised short code 
int maxidiff_m(int arr[],int size){
    int minbefore=arr[0],ans;
    for(int i=1;i<size;i++){
        if(minbefore<arr[i]){
            ans=max(ans,arr[i]-minbefore);
        }
        minbefore=min(minbefore,arr[i]);

    }
    return ans;
}
int main(){
int arr[]={6,8,4,9,11,1,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<maxidiff_m1(arr,size)<<endl;
    cout<<maxidiff_m(arr,size)<<endl;
    return 0;
}