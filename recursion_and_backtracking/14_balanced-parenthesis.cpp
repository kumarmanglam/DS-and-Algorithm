#include <iostream>
#include <vector>
using namespace std;
void solve(int open,int close,string op,vector<string>&v)
{
    if(open==0 && close==0)
    {
        v.push_back(op);
        return;
    }
    if (open!=0)
    {
        string op1=op;
        string cl="(";
        op1.push_back(cl[0]);
        solve(open-1,close,op1,v);
    }
    if(close>open){
        string op2=op;
        string opp=")";
        op2.push_back(opp[0]);
        solve(open,close-1,op2,v);
    }
    return;
}
vector <string> fun(int n)
{
    vector<string>v;
    int close=n;
    int open=n;
    string op="";
    solve(open,close,op,v);
    return v;
}
int main()
{
    int n;
    cin>>n;
    vector<string>store;
    store=fun(n);
    for(int i=0; i < store.size(); i++)
        cout << store.at(i) << ' ';
    return 0;
}