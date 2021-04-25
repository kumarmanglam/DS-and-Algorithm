//12:28am
#include <iostream>
#include <list>
#include <vector>
using namespace std;
vector <int> maximumofeach(vector<int>&arr,int k)
{
    //calculation
    list<int>l;
    vector <int>v;
    int i=0,j=0;
    int n=arr.size();

    
    while (j<n)
    {
        while (l.back()<arr[j] && l.size()>0)
            l.pop_back();
        l.push_back(arr[j]);

        if(j-i+1<k)
            j++;
        else
        {
            //calculation
            //remove previous i data
            v.push_back(l.front());
            if(l.front()==arr[i])
                l.pop_front();
            i++;
            j++;
        }
    }
    return v;
}
int main()
{
    vector<int>arr=      ;
    vector<int>v;
    v=maximumofeach(arr,3);
    int n=arr.size();
    for(int i=0;i<n-3;i++)
        cout<<" "<<v[i]<<endl;
    return 0;
}

//deque version of above code :_)
/**
#include <iostream>
#include <deque>
#include <vector>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) 
{
        vector<int>v;
        deque<int>q;
        int i=0,j=0;
        int n=nums.size();
        while(j<n)
        {
            while(q.size()>0 && q.back()<nums[j])
                q.pop_back();
            q.push_back(nums[j]);
            
            if(j-i+1<k)
                j++;
            else
            {
                v.push_back(q.front());
                if(nums[i]==q.front())
                    q.pop_front();
                i++;
                j++;
            }
            
        }
        return v;
}
*/