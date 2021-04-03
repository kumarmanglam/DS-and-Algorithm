#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int>&v,int temp)
{
    if(v.size()==0||v[v.size()-1]<=temp)
    {
        v.push_back(temp);
        return;
    }
    int val=v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
    return;
}
void sortarray(vector<int>&v)
{
    if (v.size()==1)
        return;
    int temp=v[v.size()-1];
    v.pop_back();
    sortarray(v);
    insert(v,temp);
}

int main(){
    vector<int> g1;
    int n;
    cout<<"how many elements do you want to enter: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter an element";
        int x;
        cin>>x;
        g1.push_back(x);
    }
    sortarray(g1);
    for (int x: g1)
        cout<<x<<" ";
    return 0;
}