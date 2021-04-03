#include <iostream>
using namespace std;

#define n 100 // predefining the value of n

class stack{
    //private variables
    int*arr; //dynamic array
    int top; //pointer to top element
    public:
    stack(){
        arr=new int[n];//allocating memory to array
        top=-1;//
    }
    //operations in stack
    void push(int x)
    {
        if (top==n-1)
        {
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop()
    {
        if (top==-1)
        {
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(8);
    st.push(32);
    st.push(23);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}