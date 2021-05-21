#include <iostream>
using namespace std;

bool ispalindrome(int str[],int start,int end){
    if(start>=end)
        return true;
    return ((str[start]==str[end]) && ispalindrome(str,start+1,end-1));
}
int main(){
    int arr[]={1,2,3,4,5,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<ispalindrome(arr,0,n-1);
}