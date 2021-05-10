#include <iostream>
#include <vector>
using namespace std;
void product(){
    for(int i=0;i<n,i++){
        combined[i]=rr[i]*v[i];
    }
}
int maxinarray(int arr[],int n){
    int mx;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    return mx;
}
int main(){
    vector <int>v={1,2,3,4,5};
    vector <int>rr={1,2,3,4,5};
    int combined[];
    int lis[100];
    for(int i=0;i<5;i++){
        lis[i]=v[i]*rr[i];
        // pp[i]=v[i]*rr[i];
    }
    for(int i=0;i<5;i++){
        cout<<lis[i];
        // cout<<pp[i];
    }
  return 0;
}