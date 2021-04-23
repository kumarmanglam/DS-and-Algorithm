#include <iostream>
#include <stack>

using namespace std;

stack <int> s;
int minele;

void push(int x)
{
    if(s.size()==0)
    {
        s.push(x);
        minele=x;
    }
    else
    {
        if(x>=minele)
            s.push(x);
        else if (x<minele)
            s.push(2*x-minele);
    }
}

void pop()
{
    if(s.size()==0)
        return -1;
    else
    {
        if(s.top()>=minele)
            s.pop();
        else if(s.top()<minele)
            minele=2*minele -s.top();
            s.pop();
    }
}
int top()
{
    if (s.size()==0)
        return -1;
    else 
    {
        if s.top()>=minele
            return s.top();
        else if( s.top()<minele)
            return minele;
    }
}
int main()
{
    //use the above code here!!!
}
