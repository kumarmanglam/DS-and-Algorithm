#include <iostream>
#include <unordered_map>
using namespace std;

//naive solution NOTE::- we do not want to print frequencies multiple times

void printfrequencies(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=0;j<i;j++){//we will check in left wether that element has come before
            if (arr[i]==arr[j]){ flag=true; break;}}
        if (flag==true) continue;//continue with next iteration(ignore element if it appeared already)
        int freq=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
                freq++;
        }
        cout<<arr[i]<<" - " <<freq<<endl;
    }
}

//efficient solution -- auxiliary spaceO(n) time O(n)
void freq(int arr[], int n){
    //creating hash map 
    unordered_map <int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    //printing key value pairs from map
    for(auto it=mp.begin();it!=mp.end();it++)
        cout<<(it->first)<<" - "<<(it->second)<<endl;

    //printing while mainting order
    for(auto e:mp)
        cout<<e.first<<" -=- "<<e.second<<endl;

}
int main(){
    int arr[]={3,5,5,6,6,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    freq(arr,n);
    return 0;
}