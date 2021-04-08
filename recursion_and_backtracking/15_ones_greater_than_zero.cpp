#include <iostream>
using namespace std;
void solve(string op,int one,int zero,int n)
{
    if (n==0)
    {
        cout<<op<<" ";
        return;
    }
    string op1=op;
    op1.push_back('1');
    solve(op1,one+1,zero,n-1);
    if (one>zero)
    {
        string op2=op;
        op2.push_back('0');
        solve(op2,one,zero+1,n-1);
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    string op=""; 
    int one=0,zero=0;
    solve(op,one,zero,n);
    cout<<endl;
    return 0;
}