#include <iostream>
#include <string>
using namespace std;
void solve(string ip,string op)
{
    if(ip.length()==0)
    {
        cout<<op<<endl;
        return;
    }
    string op1=op;
    string op2=op;
    string space="_";
    op1.push_back(space[0]);
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
    return;
}
int main()
{
    string ip;
    cin>>ip;
    string op="";
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op);
    cout<<endl;
    return 0;
}