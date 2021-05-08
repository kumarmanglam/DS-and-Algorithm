#include <iostream>
using namespace std;

int recurBS(int arr[],int x,int low,int high)
{
    if(high<low){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        return recurBS(arr,x,low, mid-1);
    }
    else{
        recurBS(arr,x,mid+1, high);
    }

}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<recurBS(arr,99,0,9);

  return 0;
}
