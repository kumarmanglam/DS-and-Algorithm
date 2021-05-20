#include <iostream>
#include <unordered_set>
using namespace std;

//naive solution --o(n^2)--
int pairsum(int arr[],int n,int given){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i]+arr[j]==given)
                return true;
        }
    }
    return false;
}

//efficient solution
int ispair(int arr[],int n,int sum){
    unordered_set<int>h;
    for(int i=0;i<n;i++){
        if(h.find(sum-arr[i])!=h.end()){//check before insertion
            return true;
        }
        else h.insert(ar[i]);
    }
    retrun false;
}
int main(){
    int arr[]={3,8,8,15,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<pairsgiven(arr,n,5);
    return 0;
}


//efficient solution --O(N)-- this solution does not work
//here drawback is that we can sum a single element two time by mistake
// int pairsgiven(int arr[],int n,int given){
//     unordered_set <int> a(arr,arr+n);
//     for(int i=0;i<n;i++){
//         if(a.find(given-arr[i])!=a.end()){
//             return true;
//         }
//     }
//     return false;
// }       
