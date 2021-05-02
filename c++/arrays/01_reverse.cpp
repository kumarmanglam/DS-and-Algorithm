#include <iostream>
using namespace std;
void reverse(int arr[],int n)
{
    for (int i=0;i<n/2;i++)
    {
        swap(arr[i],arr[n-1-i]);
    }   
}
void reverseSE(int arr[],int start,int end){
    for(int i=0;i<=(end-start)/2;i++){
        swap(arr[start+i-1],arr[end-i-1]);
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[100]={1,2,3,4,5,6,7,8,9};
    // reverse(arr,5);
    reverseSE(arr,3,5);
    printArray(arr,9);
    // cout<<(5-2)/2;
    return 0;
}
//end-start/2=1
//i=0
//s+i-1=1,d-i-1=4
//i=1
//s+i-1=2,d-i-1=3
