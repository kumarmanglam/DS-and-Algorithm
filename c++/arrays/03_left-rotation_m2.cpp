//this method is called using temparray
// ip 1 2 3 4 5 
// op 4 5 1 2 3 

//process
//1 2 3 4 5 copy 1 2 in new array and shift rest elements
//3 4 5 1 2 
#include <iostream>
using namespace std;
void leftrotaionM2(int arr[],int d,int n){
    int temp[100];
    //copying first d elements to new array
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    //shifting rest of the elements to the beginning 
    for(int i=0;i<n-d;i++){
        arr[i]=arr[i+d];
    }
    //copying elements form new array to orginal array
    for (int i=0;i<d;i++){
        arr[i+n-d]=temp[i];
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    printArray(arr,7);
    leftrotaionM2(arr,2,7);
    printArray(arr,7);
    return 0;
}
