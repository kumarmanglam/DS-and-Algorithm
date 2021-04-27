// this question is same as to find largest substring with two unique characters or K=2!!!
#include <iostream>
#include <string>
#include <map>
#include <climits>
using namespace std;
int largest_uniques(string s,const int k)
{
    int i=0,j=0;
    int mx=INT_MIN;
    map<char,int>mp;
    while(j<s.length())
    {
        mp[s[j]]++;
        if(mp.size()<k)
            j++;
        else if(mp.size()==k)
        {
            mx=max(mx,j-i+1);
            j++;
        }
        else
        {
            while (mp.size()>k)
            {
                mp[s[i]]--;
                if (mp[s[i]]==0)
                    mp.erase(s[i]);
                i++;
            }
            j++;
        }
    }
    return mx;
}
int main()
{
    string  s;
    s = "abbaebbawsea";
    int mx;
    mx=largest_uniques(s,2);
    cout<<endl<<mx<<endl;
    return 0;
}
