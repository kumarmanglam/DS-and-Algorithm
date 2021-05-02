//5:13 pm 27/4
#include <iostream>
#include <string>
#include <map>
#include <climits>
using namespace std;
int minimum_window_copied_str(string s, string ss)
{
    int i = 0, j = 0, count = 0;
    int mn = INT_MAX;
    map<char, int> mp;
    for (int k = 0; k < ss.length(); k++)
    {
        mp[ss[k]]++;
    }
    while (j < s.length())
    {
        mp[s[j]]--;
        if (count > 0)
        {
            if (mp.count(s[j]) > 0)
            {
                mp[s[j]]--;
                if(mp[s[j]]==0)
                    count--;
            }
            j++;
        }
        else if (count == 0)
        {
            mn = min(mn, j - i + 1);
            if(mp[s[j]]==0)
                count++;
            if (mp.count(s[j]) > 0)
            {
                mp[s[i]]++;
            }
            i++;
            j++;
        }
    }
    return mn;
}
int main()
{
    string ptr, ss;
    ptr = "abbaabbaa";
    ss = "aba";
    int anss=minimum_window_copied_str(ptr,ss);
    cout << "the answer is  " << anss << endl;
    return 0;
}