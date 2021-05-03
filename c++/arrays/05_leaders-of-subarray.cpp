#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> vect;
void leaderusingtowloops(int a[],int n){
    for(int i=0;i<n;i++){
        int j;
        for( j=i+1;j<n;j++){
            if(a[j]>a[i]){
                break;
            }
        }
        if (j==n)
            cout<<a[i]<<" ";
    }
}
void leaders(int arr[],int size){
    int mx=arr[size-1];
    vect.push_back(mx);
    for(int i=size-2;i>=0;i--){
        if(arr[i]>mx){
            vect.push_back(arr[i]);
            mx=arr[i];
        }
    }
}



int main(){
    int arr[]={16,17,4,3,5,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    leaders(arr,size);
    reverse(vect.begin(),vect.end());
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<" ";
    }
    leaderusingtowloops(arr,size);
    return 0;
}
/**
class Solution{
    public:
    vector<int> leaders(int arr[], int size){
        vector<int>vect;
        int mx=arr[size-1];
        vect.push_back(mx);
        for(int i=size-2;i>=0;i--){
            if(arr[i]>=mx){
                vect.push_back(arr[i]);
                mx=arr[i];
            }
        }
        reverse(vect.begin(),vect.end());
        return vect;
    }
};
*/

