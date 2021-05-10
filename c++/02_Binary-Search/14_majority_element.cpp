#include <iostream>
using namespace std;


//moore's voting 
int majormoore(int arr[],int n){
    int res=0,count=1;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i])
            count++;
        else count--;
        if(count==0){
            count=1;
            res=i;
        }
    }
    //second phase of code that confirms that if the element is majority
    count=0;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i])
            count++;
    }
    if(count<=n/2)
        return -1;
    return arr[res];

}
//efficient solution
int main(){
    int arr[]={1,4,13,13,13,13,13,13,13,13,13,23,45,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<majormoore(arr,n);
    return 0;
}