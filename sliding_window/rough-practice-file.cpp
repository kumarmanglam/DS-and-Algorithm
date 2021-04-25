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