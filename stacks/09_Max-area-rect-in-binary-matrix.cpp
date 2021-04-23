//this question is solved yet
// I cannot deal with 2d vectors properly.
// there may some other flow alse in the code
//I cannot extract particular vector in 1d from 2d array and apply MAH individually on that.

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
vector<int> ll;
vector<int> rr;
stack<pair<int, int>> s;
stack<pair<int, int>> ss;
void NsL(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s.size() == 0)
        {
            ll.push_back(-1);
        }
        else if (s.size() > 0 && s.top().first < arr[i])
        {
            ll.push_back(s.top().second);
        }
        else if (s.size() > 0 && s.top().first >= arr[i])
        {
            while (s.size() > 0 && s.top().first >= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
                ll.push_back(-1);
            else
                ll.push_back(s.top().second);
        }
        s.push({arr[i], i});
    }
}
void NsR(vector<int> &arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (ss.size() == 0)
        {
            rr.push_back(n);
        }
        else if (ss.size() > 0 && ss.top().first < arr[i])
        {
            rr.push_back(ss.top().second);
        }
        else if (ss.size() > 0 && ss.top().first >= arr[i])
        {
            while (ss.size() > 0 && ss.top().first >= arr[i])
            {
                ss.pop();
            }
            if (ss.size() == 0)
            {
                rr.push_back(n);
            }
            else
                rr.push_back(ss.top().second);
        }
        ss.push({arr[i], i});
    }
}
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
int MAH(vector <int>&arr,int n)
{
    NsL(arr,n);
    NsR(arr,n);
    reverse(rr.begin(),rr.end());
    int wid[100];
    for (int i=0;i<n;i++)
    {
        wid[i]=rr[i]-ll[i]-1;
    }
    int are[100];
    for (int i=0;i<n;i++)
    {
        are[i]=wid[i]*arr[i];
    }
    int maxi;
    maxi=largest(are,n);
    return maxi;
}
int max1(int n,int m)
{
    if(n>m)
        return n;
    return m;
}
int main()
{
    vector<vector<int>> vect
    {
        {0,1,1,0},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,0,0}
    };
    vector <int> v;
    for(int i=0;i<4;i++)
    {
        v.push_back(vect[0][i]);
    }
    int mx=MAH(v,4);
    for(int i=1;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            if(vect[i][j]==0)
                v[j]=0;
            else    
                v[j]=v[j]+vect[i][j];
        }
    mx=max1(mx,MAH(v,4));
    cout<<" and the vector is : "<<v[0]<<" | "<<v[1]<<" | "<<v[2]<<" | "<<v[3]<<" | "<<endl;
    cout<<" here i is "<<i<<" and MAH IS "<<MAH(v,4)<<"and max is "<<mx<<endl;
    }
    cout<<mx<<endl;
    return 0;
}