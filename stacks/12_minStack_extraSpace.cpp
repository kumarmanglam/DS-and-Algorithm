#include <iostream>
#include <stack>

using namespace std;

stack <int> s;
stack <int> ss;

int push(int a)
{
    s.push(a);
    if(ss.size()==0 || ss.top()>a)
        ss.push(a);
    return;
}
int pop()
{
    if (s.size()==0)
        return 0;
    int ans=s.top();
    s.pop();
    if(ss.top()==ans)
        ss.pop();
    return ans;
}
int getmin()
{
    if(ss.size()==0)
        return -1;
    return ss.top();
}
int main()
{
    //implementat the above code here..
}
