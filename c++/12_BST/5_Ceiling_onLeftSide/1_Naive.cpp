#include <iostream>
#include <map>
#include <climits>
using namespace std;

void printceil(int arr[],int n){
    cout<<arr[0]<<" "<<-1<<endl;
    for(int i=1;i<n;i++){
        int diff=INT_MAX;
        for(int j=0;j<i;j++){
            if(arr[j]>=arr[i])
                diff=min(diff,arr[j]-arr[i]);
        }
        if(diff==INT_MAX)
            cout<<arr[i]<<" "<<-1<<endl;
        else 
            cout<<arr[i]<<" "<<arr[i]+diff<<endl;
    }
}

int main(){
    int arr[]={6,18,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printceil(arr,n);
    return 0;
}
