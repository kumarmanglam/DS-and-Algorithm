#include <iostream>
#include<stack>
using namespace std;

void previousgreater(int arr[],int n){
    stack <int> s;
    for(int i=0;i<n;i++){
        int index=0;
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        index=s.empty()? -1: s.top();
        cout<<index<<" ";
        s.push(i);
    }
}

int main(){
    int arr[]={1,45,23,11,10,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    previousgreater(arr,n);
    return 0;
}
