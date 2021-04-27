//2:32 code fast
//the point of pain is that in previous questions k was given but here we have not been given km
#include <iostream>
#include <string>
#include <map>
#include <climits>
using namespace std;
int largest_uniques(string s)
{
    int i=0,j=0;
    int mx=INT_MIN;
    map<char,int>mp;
    while(j<s.length())
    {
        mp[s[j]]++;
        if(mp.size()==j-i+1)
        {
            if(mp.size()==j-i+1)
            {
                mx=max(mx,j-i+1);
            }
        }
        else
        {
            while (mp.size()<j-i+1)
            {
                mp[s[i]]--;
                if (mp[s[i]]==0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
        }
        j++;
    }
    return mx;
}
int main()
{
    string  s;
    s = "qwertyfgmhjk";
    int mx;
    mx=largest_uniques(s);
    cout<<endl<<mx<<endl;
    return 0;
}
