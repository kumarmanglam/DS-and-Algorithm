#include <iostream>
#include <unordered_set>
using namespace std;

//naive solution --o(n^2)-- solution
int givensum(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
            curr_sum+=arr[j];
            if(curr_sum==x){
                return true;
            }
        }
    }
    return false;
}

//efficient solution by gfg
//in this approach logic is that we are checking current_sum - required_sum constantly throughout the loop
//example 
//array -      5  8  6  13  3  -1
//prefix sum-  5  13 
int findsumsubarray(int arr[],int n,int sum){
    unordered_set <int>h;
    int pre_sum=0;
    for(int i=0;i<n;i++){
        pre_sum+=arr[i];
        if(pre_sum==sum)
            return true;
        if(h.find(pre_sum-sum)!=h.end())
            return true;
        h.insert(pre_sum);
    }
    return false;
}
int main(){
    int arr[]={0,12,1,-4,10,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findsumsubarray(arr,n,7);
    return 0;
}

// //efficient solution --O(n)--
// int givensums(int arr[],int n,int x){
//     unordered_set<int>h;
//     int presum1=0;
//     int presum2=0;
//     for(int i=0;i<n;i++){
//         presum2=presum1;
//         presum2+=arr[i];
        
//         if(h.find(presum2-presum1)!=h.end())
//             return true ;
//         if(presum1==x)
//             return true;
//         h.insert(presum2);
//     }
//     return false;
// }
