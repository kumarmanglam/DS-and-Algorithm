#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int rain_trap(vector <int> v,int n)
{
    vector<int> mxl;
    vector<int> mxr;    
    vector<int> water;
    mxl[0]=v[0];
    for (int i=1;i<n;i++);
    {
        mxl[i]=max(mxl[i-1],v[i]);
    }
    mxr[n-1]=v[n-1];
    for (int i=n-2;i>=0;i--)
        mxr[i]=max(mxr[i+1],v[i]);
    for (int i=0;i<n;i++)
        water[i]=min(mxl[i],mxr[i])-v[i];
    int ans=0;
    for (int i=0;i<n;i++)
        ans=ans+water[0];
}

int main()
{
    vector <int> vect {3,0,0,2,0,4} ;
    int n=sizeof(vect);
    int ans=rain_trap(vect,n);
    return 0;
}
