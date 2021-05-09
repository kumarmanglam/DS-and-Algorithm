#include <iostream>
using namespace std;
//naive solution takes 0(N^1/2) Time 
int sroot(int x){
    int i=1;
    while (i*i<=x)
        i++;
    return i-1;
}
//bs apprach O(logn) time 
int bsroot(int x){
    int low=1,high=x,ans=-1;
    while(low<=high){
        int mid=(high+low)/2;
        int msq=mid*mid;
        if(msq==x) 
            return mid;
        else if(msq>x) 
            high=mid-1;
        else{
            low=mid+1;
            ans=mid;//saving the lower bound :)
        }
    }
    return ans;
}

int main(){
    cout<<sroot(49)<<endl;
    cout<<bsroot(50);
    
    return 0;
}