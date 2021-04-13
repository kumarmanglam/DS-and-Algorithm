#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
vector <int> v;
stack <int>s;

void nextgreater(int arr[],int size)
{
    for (int i=size-1;i>=0;i--)
    {
        if (s.size()==0)
            v.push_back(-1);
        else if(s.size()>0 && s.top()>arr[i])
            v.push_back(s.top());
        else if(s.size()>0 && s.top()<=arr[i])
        {
            while (s.size()>0 &&s.top()<arr[i])
                s.pop();
            if (s.size()==0)
                v.push_back(-1);
            else v.push_back(s.top());
        }
    s.push(arr[i]);
    }
}

int main(){
    int arr[100]={1,3,2,4};
    nextgreater(arr,100);
    reverse(v.begin(),v.end());
    for(int i=0;i<4;i++)
    {
        cout<<v[i];
    }
    return 0;
}