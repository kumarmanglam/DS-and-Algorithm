#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
map <char,int> mp;
int anagram(string s, int size,int k)
{
    int i=0,j=0,count=3,ans=0;
    while (j<size)
    {
        while ((j-i+1)<k)
        {
            if (mp.count(s[j]>0))
            {
                mp[s[j]]--;
            }
            j++;
        }
        if((j-i+1)==k)
        {
            if(mp.count(s[j]))
            {
                mp[s[j]]--;
            }
            for(map<char,int>::iterator j=mp.begin();j!=mp.end();++j)
            {
                if((*j).second==0)
                    count--;
            }
            if(count==0)
                ans++;
        }
        //now we have to remove start of window and do the calculation!!!
        //we have to reset count also but what should be the condition!!
        if(mp.count(s[i]))
        {
            mp[s[i]]++;
            count++;
        }
        i++;
        j++;
    }
    return ans;
}

int main()
{
    string ptr,ss;
    ptr="aabaabaa";
    ss="aaba";
    int size,sizz;
    size=sizeof(ptr)/sizeof(ptr[0]);
    sizz=sizeof(ptr)/sizeof(ptr[0]);
    for (int i=0;i<4;i++)
    {
        mp[ss[i]]++;
    }
    for(map<char,int>::iterator j=mp.begin();j!=mp.end();++j)
    {
        cout<<(*j).first<<" - "<<(*j).second<<endl;
    }
    int anss;
    anss=anagram(ptr,size,sizz);
    cout<<"the answer is  "<<anss<<endl;
    return 0;
}