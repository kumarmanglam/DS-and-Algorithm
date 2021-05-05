#include <iostream>
using namespace std;
//naive approch
//using swap concept
void movezeroes(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
}

//this is better approach
//now the idea is to iterate from beginning and keep a cout on non zero numbers
void movezeroToend(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j++]=arr[i];
        }
    }
    while(j<n){
        arr[j++]=0;
    }
}
//method2 for efficient solution
void movezero(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j++]);
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,5,0,0,8,0,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    movezero(arr,n);
    printArray(arr,n);
  return 0;
}
//unsuccessful attemt
//iterate from back if zero encountered swap with non integer in back
// void movezerotoEnd(int arr[],int n){
//     int i=n-1,j=n-1;
//     while (i>=0){
//         //if not zero
//         if(arr[i]!=0){
//             j=i;
//             i--;
            
//         }
//         else{
//             swap(arr[i],arr[j]);
//             j--;
//         }
//     }
// }