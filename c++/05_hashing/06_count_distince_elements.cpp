#include <iostream>
#include <unordered_set>
using namespace std;
//naive solution
int coutndistinct(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if (arr[i]==arr[j]){
                flas=true;
            }
        }
        if(flag=true)
            res++;
    }
    return res;
}
int countdis(int arr[],int n){
    unordered_set <int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();
}

int main(){
    int arr[]={12,3,4,5,632,12,2,3,4,632};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countdis(arr,n);
    return 0;
}