//to be vesited
//given as rope cut the rope into maximum 
//number of peices such that every peice has length either a,b,c

#include <iostream>
using namespace std;
int r=0;

int ropetask(int n,int a,int b,int c){
    if(n<0)
        return -1;
    if(n==0)
        return 0;
    int k=-900,r=-900;
    k=max(ropetask(n-a,a,b,c),ropetask(n-b,a,b,c));
    r=max(r,ropetask(n-c,a,b,c));
    if(r==(-1))
        return -1;
    return r+1;
}


//live class code
int func1(int n,int a,int b,int c)
{
	if(n == 0)
		return 0;
    if(n<0)
        return INT_MIN;
    int r=max(func1(n-a,a,b,c),max(func1(n-b,a,b,c),func1(n-c,a,b,c)));
    // if(r<=-1)
    //     return -1;
    return 1+r;
}
int main(){
    cout<<ropetask(9,2,2,3);
    return 0;
}
