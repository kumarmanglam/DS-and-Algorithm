#include <iostream>
#include <algorithm>
using namespace std;


void dupli_miss(int arr[],int n)
{
    int i=0;
    while (i<n){
        if(arr[i]!=arr[arr[i]-1])
        {
            swap(arr[i],arr[arr[i]-1]);
        }
        else i++;
    }
    for (int i=0;i<n;i++)
    {
        if(i!=arr[i]-1)
        {
            cout<<"missing is "<<i+1<<" $ and #";
            cout<<"duplicate is "<<arr[i]<<endl;
        }
    }
}

int main(){
    int arr[]={2,3,1,5,1,6,5,8,9};
    dupli_miss(arr,9);
    return 0;
}