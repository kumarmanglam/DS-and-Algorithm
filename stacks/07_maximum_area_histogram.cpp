//this short and consise code for MAH problem which is usefull in upcoming problems!!!!!
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
vector <int> ll;
vector <int> rr;
stack <pair<int,int>> s;
stack <pair<int,int>> ss;
void NsL(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            ll.push_back(-1);
        }
        else if(s.size()>0 && s.top().first<arr[i])
        {
            ll.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=arr[i])
        {
            while(s.size()>0 && s.top().first>=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
                ll.push_back(-1);
            else 
                ll.push_back(s.top().second);
        }
    s.push({arr[i],i});
    }
}
void NsR(int arr[],int n)
{
    for (int i=n-1;i>=0;i--)
    {
        if(ss.size()==0)
        {
            rr.push_back(n);
        }
        else if(ss.size()>0 && ss.top().first<arr[i])
        {
            rr.push_back(ss.top().second);
        }
        else if(ss.size()>0 && ss.top().first>=arr[i])
        {
            while(ss.size()>0 && ss.top().first>=arr[i])
            {
                ss.pop();
            }
            if(ss.size()==0)
            {
                rr.push_back(n);
            }
            else 
                rr.push_back(ss.top().second);
        }
    ss.push({arr[i],i});
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
int MAH(int arr[],int n)
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
int main()
{
    int arr[100]={6,8,5,4,5,6,6};
    int n=7;
    int mxx;
    mxx=MAH(arr,n);
    cout<<"the answer is :  "<<mxx;
    return 0;
}


/**this was orignal code which has mah code in int main driver
// Find the largest rectangular area possible in a given histogram 
// where the largest rectangle can be made of a number of contiguous bars. 
// For simplicity, assume that all bars have same width and the width is 1 unit.
// most famous problem in interviews
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
vector <int> ll;
vector <int> rr;
stack <pair<int,int>> s;
stack <pair<int,int>> ss;
void NsL(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            ll.push_back(-1);
        }
        else if(s.size()>0 && s.top().first<arr[i])
        {
            ll.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=arr[i])
        {
            while(s.size()>0 && s.top().first>=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
                ll.push_back(-1);
            else 
                ll.push_back(s.top().second);
        }
    s.push({arr[i],i});
    }
}
void NsR(int arr[],int n)
{
    for (int i=n-1;i>=0;i--)
    {
        if(ss.size()==0)
        {
            rr.push_back(n);
        }
        else if(ss.size()>0 && ss.top().first<arr[i])
        {
            rr.push_back(ss.top().second);
        }
        else if(ss.size()>0 && ss.top().first>=arr[i])
        {
            while(ss.size()>0 && ss.top().first>=arr[i])
            {
                ss.pop();
            }
            if(ss.size()==0)
            {
                rr.push_back(n);
            }
            else 
                rr.push_back(ss.top().second);
        }
    ss.push({arr[i],i});
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

int main()
{
    int arr[100]={6,2,5,4,5,1,6};
    int n=7;
    NsL(arr,n);
    NsR(arr,n);
    // cout<<"it is NsL"<<"\n";
    // for(int i=0;i<n;i++)
    //     cout<<ll[i]<<" | ";
    // cout<<"\n";
    reverse(rr.begin(),rr.end());
    // cout<<"it is NsR"<<"\n";
    // for(int i=0;i<n;i++)
    //     cout<<rr[i]<<" | ";
    // cout<<endl;
    //making width array
    int width[100]={};
    for(int j=0;j<n;j++)
    {
        width[j]=rr[j]-ll[j]-1;
    }
    cout<<endl;
    //making area array
    int area[100]={};
    for (int k=0;k<n;k++)
    {
        area[k]=width[k]*arr[k];
        // cout<<area[k]<<" | | ";
    }
    int mxx;
    mxx=largest(area,n);
    cout<<"the answer is :  "<<mxx;
    return 0;
}
*/