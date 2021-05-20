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

//efficient solution O(n) time
int iszero(int arr[],int n ){
    int presum=0;
    unordered_set<int> h;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        if(h.find(presum)!=h.end())
            return true;
        if(presum==0)
            return true;
        h.insert(presum);
    }
    return false;
}

int main(){
    int arr[]={0,12,3,4,10,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<iszero(arr,n);
    return 0;
}