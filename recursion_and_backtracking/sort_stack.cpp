#include <iostream>
#include <stack>
using namespace std;

void insert(std::stack<int>&s,int temp)
{
    if (s.size()==0 || s.top()<=temp)
    {
        s.push(temp);
        return;
    }
    int val=s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
    return;
}

void sort(std::stack<int>&s)
{
    if (s.size()==1) return;
    int temp=s.top();
    s.pop();
    sort(s);
    insert(s,temp);
    return;
}

void print(std::stack<int> stk) {
    while(!stk.empty()) {
        cout<<stk.top() <<" | ";
        stk.pop();
    }
    cout<<endl;
}

int main(){
    std::stack<int> st;
    st.push(1);
    st.push(8);
    st.push(32);
    st.push(23);
    print(st);
    sort(st);
    print(st);
    return 0;
}