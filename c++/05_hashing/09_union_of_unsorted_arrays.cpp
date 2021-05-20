#include <iostream>
#include <unordered_set>
using namespace std;

//naive solution -O(n^2)
int unionofunsort(int arr1[],int m,int arr2[],int n){
    int res=1;
    int auxi[100];
    auxi[0]=arr1[0];
    //inserting elements from arr1
    for(int i=1;i<m;i++){
        bool flag=false;
        for(int j=0;j<res;j++){
            if (auxi[j]==arr1[i])
                flag=true;
        }
        if (flag==false){
            auxi[res]=arr1[i];
            res++;
        }
    }
    //inserting from arr2
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<res;j++){
            if (auxi[j]==arr2[i])
                flag=true;
        }
        if (flag==false){
            auxi[res]=arr1[i];
            res++;
        }
    }
    return res;
}

//efficient solution
int unions(int arr1[],int m,int arr2[],int n){
    unordered_set<int> us;
    for(int i=0;i<m;i++)
        us.insert(arr1[i]);
    for(int j=0;j<n;j++)
        us.insert(arr2[j]);
    return us.size();
}
int main(){
    int arr1[]={1,2,3};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={3,7,1,2,3,4,5,6,9,8};
    int n=sizeof(arr2)/sizeof(arr2[0]);
    cout<<unions(arr1,m,arr2,n)<<endl;
    return 0;
}