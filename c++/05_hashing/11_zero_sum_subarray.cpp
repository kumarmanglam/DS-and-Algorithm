#include <iostream>
#include <unordered_set>
using namespace std;

//naive solution
bool iszeroarray(int arr[],int n){
    for(int i=0;i<n;i++){
        int currsum=0;
        for(int j=i;j<n;j++){
            currsum+=arr[j];
            if(currsum==0){
                return true;
            }
        }
    }
    return false;
}

//efficient solution
int iszero(int arr[],int n ){
    int presum=arr[0];
    unordered_set<int> h;
    h.insert(presum);
    for(int i=1;i<n;i++){
        presum+=arr[i];
        if(h.find(presum)!=h.end())
            return true;
        h.insert(presum);
    }
    return false;
}


int main(){
    int arr[]={12,3,4,10,-3,-10,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<iszero(arr,n);
    return 0;
}