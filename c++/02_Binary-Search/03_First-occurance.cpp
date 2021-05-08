#include <iostream>
using namespace std;
//Naive solution is to linearly search for the element O(N) time O(1) space

//this is efficient solution o(logN) o(1)
//here iterative BS is better as it will avoid uneccessary function call overheads
int firstOcc(int arr[],int low,int high,int x){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(x>arr[mid]){
        return firstOcc(arr,mid+1,high,x);
    }
    else if(x<arr[mid]){
        return firstOcc(arr,low,mid-1,x);
    }
    else{
        if(mid==0 || arr[mid-1]!=arr[mid])
            return mid;
        else 
            return firstOcc(arr,low,mid-1,x);
    }
}
//method 4 iterative best approach
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

//this is my method which is combination of BS and linear
//this is linear search towards the left (in worst cases it takes O(N) time )
int iterBS(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while (low <= high)   
	{
		int mid = (low + high) / 2;

		if (arr[mid] == x)
			return mid;

		else if (arr[mid] > x)
			high = mid - 1;

		else
			low = mid + 1;
	}

	return -1;
}
int lowerbound(int arr[],int n,int x){
    int ans=iterBS(arr,n,x);
    while (ans>=0 && arr[ans-1]==arr[ans]){
        ans--;
    }
    return ans;
}

int main()
{
    int arr[]={10,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=firstiter(arr,n,10);
    cout<<ans<<endl;
    return 0;
}
