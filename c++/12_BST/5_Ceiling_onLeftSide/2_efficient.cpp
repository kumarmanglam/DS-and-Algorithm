#include <iostream>
#include <set>
using namespace std;

void printceiling(int arr[],int n){
    cout<<-1<<" ";
    set<int>s;
    s.insert(arr[0]);
    for(int i=1;i<n;i++){
        if(s.lower_bound(arr[i])!=s.end()){
            cout<<*(s.lower_bound(arr[i]))<<" ";
        }
        else{
            cout<<-1<<" ";
        }
        s.insert(arr[i]);
    }
}

int main(){
    int arr[]={4,5,3,7,32,4,5,67,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    printceiling(arr,n);
    return 0;
}
