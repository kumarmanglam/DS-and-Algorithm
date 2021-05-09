//logic is no of occurances = iterlast-iterfirst O(N) time o1 space

#include <iostream>
using namespace std;
int lastiter(int arr[],int n,int x)
{
	int low = 0, high = n - 1;

	while (low <= high)   
	{
		int mid = (low + high) / 2;
		if (arr[mid] > x)
			high = mid - 1;
		else if(arr[mid]<x)
			low = mid + 1;
        else{
            if(mid==n-1 || arr[mid+1]!=arr[mid]){
                return mid;
            }
            else{
                low=mid+1;
            }
        }
	}
	return -1;
}
int firstiter(int arr[],int n,int x)
{
	int low = 0, high = n - 1;

	while (low <= high)   
	{
		int mid = (low + high) / 2;
		if (arr[mid] > x)
			high = mid - 1;
		else if(arr[mid]<x)
			low = mid + 1;
        else{
            if(mid==0 || arr[mid-1]!=arr[mid]){
                return mid;
            }
            else{
                high=mid-1;
            }
        }
	}
	return -1;
}
int nocc(int arr[],int n,int x){
    int first=firstiter(arr,n,x);
    if(first==-1){
        return -1;
    }
    else{
        return lastiter(arr,n,x)-firstiter(arr,n,x)+1;
    }
}
int main(){
    int arr[]={1,2,3,3,3,4,5,6,7,7,7,7,7,7,7,7,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=7;
    cout<<nocc(arr,n,x);
}
/**this is jugad in int main
// int main(){
//     int arr[]={1,2,3,3,3,4,5,6,7,7,7,7,7,7,7,7,7,8,9,10};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int x=3;
//     if(firstiter(arr,n,x) ==-1)
//         cout<<-1;
//     else if(firstiter(arr,n,x)==lastiter(arr,n,x)){
//         cout<<1;
//     }
//     else{
//         cout<<lastiter(arr,n,x)-firstiter(arr,n,x)+1;
//     }
//     return 0;
// }
*/