//stock span in right 
// here we have to tell consecutive number of smaller elements to every element
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
stack <pair<int,int>> s;
vector <int> rr;
void nearestgreatertoright(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
            rr.push_back(n);
        else if(s.size()>0 && s.top().first>arr[i])
            rr.push_back(s.top().second);
        else if(s.size()>0 && s.top().first<=arr[i])
        {
            while (s.size()>0 && s.top().first<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
                rr.push_back(n);
            else 
                rr.push_back(s.top().second);
        }
    s.push({arr[i],i});
    }
}
int main()
{
    int arr[100]={100,80,60,70,60,75,85};
    int n=7;
    nearestgreatertoright(arr,n);
    reverse(rr.begin(),rr.end());
    for(int i=0;i<n;i++)
        cout<<rr[i]-i<<" | ";
    
    return 0;
}