//logic of method one is that we will create a new array and store unique elements in that
//if a element is not present in new array then we will add that element to new array
//if a element is already present in new array then we will not push back to new array

//this code has some bug - to be rectified (instead of a array we have to use vector)
//vector because we get a push-back feature and search operation in built

#include <iostream>
using namespace std;
int search_element(int arr[],int ele){
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if (ele==arr[0]){
            return true;
            break;
        }
    }return false;
}
int* remove_duplicatesM1(int arr[],int n){
    int newarr[];
    int k;
    for(int i=0;i<n;i++){
        if(!search_element(newarr,arr[i])){
            newarr[k]=arrp[i];
            k++;
        }
    }
    return newarr[];
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={10,20,20,30,30,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int newarr[];
    newarr=remove_duplicatesM1(arr,n);
    
    int m=sizeof(arr)/sizeof(arr[0]);
    printArray(newarr,m);
  return 0;
}