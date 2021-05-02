#include <iostream>
using namespace std;
void reverse(int arr[],int n)
{
    for (int i=0;i<n/2;i++)
    {
        swap(arr[i],arr[n-1-i]);
    }   
}
int main()
{
    int arr[100]={1,2,3,4,5};
    reverse(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}