//11:37 27/4
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
    mx=largest_uniques(s,3);
    cout<<endl<<mx<<endl;
    return 0;
}

/**this is generalized code for variable size window problem!!!
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
long largestsize(vector<int> &arr, const int &k) 
{
    int i=0,j=0,condition;
    int size=arr.size();
    while (j<size)
    {
        //calculations
        if(condition<k)
            j++;
        else if(condition==k)
        {
            //answer calculation
            j++;
        }
        else
        {
            while (condition>k)
            {
                //remove calculation of i
                i++;
            }
            j++;
        }
    }
}
*/


