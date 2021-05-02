//given an array of size 'n' and and integer.Perform a left rotation by d positions in arr
//ip: arr=1,2,3,4,5 d=2
//op: arr:4,5,1,2,3


//brute force solution
#include <iostream>
using namespace std;
//method 1
void leftrotatebyOne(int arr[],int n)
{
    int temp=arr[0],i=0;
    for(;i<n-1;i++)
        arr[i]=arr[i+1];
    arr[n-1]=temp;
    // 1 2 3 4 5
    // 2 3 4 5 1
}
void leftrotate(int arr[],int d,int n)
{
    for(int i=0;i<d;i++)
        leftrotatebyOne(arr,n);
}
void printArray(int arr[],int n)
{
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    leftrotate(arr,2,n);
    printArray(arr,n);
    return 0;
}

//time O(N^2) space O(constant)

/**
void reversebyshiftm1(int arr[],int d)
{
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<d;i++)
    {
        int temp=arr[0];
        for (int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
}
int main()
{
    int arr[10]={1,2,3,4,5};
    int d;
    cin>>d;
    reversebyshiftm1(arr,d);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/