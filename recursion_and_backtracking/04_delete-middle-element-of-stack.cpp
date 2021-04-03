#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s,int k)
{
    if(k==1)
    {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s,k-1);
    s.push(temp);
    return;
}
stack <int> middel(stack<int>&s,int size)
{
    if (s.size()==0)
        return s;
    int k= size/2 +1;
    solve(s,k);
    return s;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    middel(st,5);
    while(!st.empty()){
        cout<<" "<<st.top();
        st.pop();
    }
    cout<<endl;
  return 0;
}