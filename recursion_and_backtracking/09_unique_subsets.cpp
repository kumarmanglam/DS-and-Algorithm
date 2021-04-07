#include <bits/stdc++.h>
using namespace std;
vector <string> v;
//how to remove duplicates from vector using map
void solve(string ip, string op)
{
    if (ip.length() == 0)
    {
        v.push_back(op);
        //do something;
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    solve(ip, op1);
    solve(ip, op2);
}
int main()
{
    return 0;
}