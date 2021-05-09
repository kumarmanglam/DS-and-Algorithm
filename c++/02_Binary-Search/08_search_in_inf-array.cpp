#include <iostream>
using namespace std;
int bsearch(int arr[], int low,int high, int x)
{


	while (low <= high)   
	{
		int mid = (low + high) / 2;
		if (arr[mid] == x)
			return mid+1;
		else if (arr[mid] > x)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}
int search(int arr[],int x){
    if(arr[0]==x);
    int i=1;
    while(arr[i]<x)
        i=i*2;
    if(arr[i]==x) return i;
    int low=(i/2)+1;
    return bsearch(arr,low,i-1,x);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99,111,222,333,444,555,666,777,888,999};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<search(arr,777)<<endl;

  return 0;
}