#include <iostream>
using namespace std;

int sorted(int arr[], int n)
{
    if (arr[n-1]>arr[n] ){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return sorted(arr,n-1);
}

int main(){
  int arr[100]={1,27,3,4,5};
  int x,n=5;
  x=sorted(arr,n-1);
  cout<<x<<" ";
  return 0;
}