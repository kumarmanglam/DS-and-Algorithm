#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int>&s,int ele)
{
    if (s.size()==0)
    {
        s.push(ele);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,ele);
    s.push(temp);
    return;
}
void reverse(stack<int>&s)
{
    if(s.size()==1)
        return;
    int temp=s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
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
    cout<<"before function"<<endl;
    print(st);
    reverse(st);
    cout<<"after function"<<endl;
    print(st);
    return 0;
}