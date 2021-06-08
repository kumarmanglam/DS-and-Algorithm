#include <iostream>
using namespace std;
//naive solution of next greater element 
void nextgreater(int arr[],int n){
	for(int i=0;i<n;i++){
	    int j;
		for(j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				cout<<arr[j]<<" ";
				break;
			}
		}
		if(j==n){
			cout<<-1<<" ";
		}
	}
}

int main(){
    int arr[]={45,23,11,67,10,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    nextgreater(arr,n);
    return 0;
}
