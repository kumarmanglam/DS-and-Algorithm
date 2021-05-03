#include <iostream>
using namespace std;
int stock_brute(int arr[],int n){
    int ans[100];
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=1;j<n;j++){
            if(arr[j]>arr[i]){
                ans[k]=arr[j]-arr[i];
                k++;
            }
        }
        //maximum in ans array ke index se hame an array ke element result array m daalna h
        int mx=0;
        for(int i=0;i<k;i++){
            mx=max(mx,ans[i]);
        }
        cout<<mx<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[]={4,2,2,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    stock_brute(arr,n);

  return 0;
}

/**
class Solution{
public:
    struct Interval
    {
        int buy;
        int sell;
    };
    vector<vector<int> > stockBuySell(vector<int> A, int n)
    {
        vector<vector<int> > result;
        if (n == 1)    
            return result;
        int count = 0;
        Interval sol[n/2 + 1];
        int i = 0;
        while (i < n-1)
        {
            while ((i < n-1) && (A[i+1] <= A[i]))
                i++;
            if (i == n-1)
                break;
            sol[count].buy = i++;
            while ((i < n) && (A[i] >= A[i-1]))
                i++;
            sol[count].sell = i-1;
            count++;
        }
        if (count == 0)
            return result;
        else
        {
            for (int i = 0; i < count; i++){
                vector<int> temp;
                temp.push_back(sol[i].buy);
                temp.push_back(sol[i].sell);
                result.push_back(temp);
            }
        }
        return result;
    }
};
*/
