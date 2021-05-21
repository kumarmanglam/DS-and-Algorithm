#include <iostream>
using namespace std;
int ropetask(int n,int a,int b,int c,int r){
    if(n<0)
        return -1;
    if(n==0)
        return 0;
    int r=max(ropetask(n-a,a,b,c,r),ropetask(n-b,a,b,c,r),ropetask(n-c,a,b,c,r));
    if(r==-1)
        return -1;
    return r+1;
}

int main(){
    cout<<ropetask(9,2,2,2,0);
    return 0;
}