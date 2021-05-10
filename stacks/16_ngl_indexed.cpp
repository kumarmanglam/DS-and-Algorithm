#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

stack <pair<int,int>> ss;
vector <int> v;


void nearestgreatertoleft(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(ss.size()==0)
            v.push_back(0);
        else if(ss.size()>0 && ss.top().first>arr[i]){
            v.push_back(ss.top().second);
            v[i]+=1;
        }
        else if(ss.size()>0 && ss.top().first<=arr[i])
        {
            while (ss.size()>0 && ss.top().first<=arr[i])
            {
                ss.pop();
            }
            if(ss.size()==0)
                v.push_back(0);
            else {
                v.push_back(ss.top().second);
                v[i]+=1;
            }
        }
    ss.push({arr[i],i});
    }
}

int main()
{
    int arra[]={5,4,3,4,5};
    int m=sizeof(arra)/sizeof(arra[0]);
    nearestgreatertoleft(arra,m);
    for(int i=0;i<m;i++){
        cout<<v[i];
    }
    return 0;
}