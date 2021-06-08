#include <iostream>
#include <stack>
using namespace std;

//here in stack we store the index of the elementss
//previous greater element 
void stockspan(int arr[],int n){
    stack <int> s;
    s.push(0);
    cout<<1<<" ";
    int span=0;
    for(int i=1;i<n;i++){
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        span=s.empty()?i+1:i-s.top();
        cout<<span<<" ";
        s.push(i);
    }
}

int main(){
    int arr[]={1,4,2,6,7,45,23,45,23,11,10,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    stockspan(arr,n);
    return 0;
}
