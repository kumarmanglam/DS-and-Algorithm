#include <iostream>
using namespace std;
int power(int x)
{
    if (x==0)
        return 1;
    if (x==1)
        return 2;
    return 2*power(x-1);
}
int solve(int n, int k)
{
    if (n==1 && k==1)
        return 0;
    int mid=power(n-2);
    if (k<=mid)
        return solve(n-1,k);
    else return !solve(n-1,k-mid);
}
int main(){
    cout<<solve(4,7)<<endl;
    return 0;
}