#include <iostream>
#include <unordered_map>
using namespace std;

//naive approach
int longests(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int count0=0,count1=0;
        for(int j=i;j<n;j++){
            if(arr[j]==0)
                count0++;
            else count1++;
            if(count0==count1){
                res=max(res,count0*2);
            }
        }
    }
    return res;
}

//efficient approach
int largestZeroSubarray(int arr[], int n)
{
    for(int i = 0; i < n; i++)//in array replace all zeroes with -1s
        arr[i] = (arr[i] == 0) ? -1 : 1;

    unordered_map<int, int> ump;
    int sum = 0, maxLen = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum == 0)
            maxLen = i+1;
        
        if(ump.find(sum+n) != ump.end())
        {
            if(maxLen < i - ump[sum+n])
                maxLen = i - ump[sum+n];
        }
        else ump[sum + n] = i;
    }
    return maxLen;
}

int main(){
    int arr[]={1,0,1,1,1,0,1,0,1,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<largestZeroSubarray(arr,n);
    return 0;
}