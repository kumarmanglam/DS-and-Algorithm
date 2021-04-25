#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
map<char, int> mp;
int anagram(string s, int size, int k)
{
    //value of count is equal to number of unique elements in pattern string
    int i = 0, j = 0, count = 2, ans = 0;
    while (j < size)
    {
        while ((j - i + 1) < k)
        {
            if (mp.count(s[j] > 0))
            {
                mp[s[j]]--;
            }
            j++;
        }
        if ((j - i + 1) == k)
        {
            if (mp.count(s[j]) > 0)
            {
                mp[s[j]]--;
            }
            for (map<char, int>::iterator j = mp.begin(); j != mp.end(); ++j)
            {
                if ((*j).second == 0)
                    count--;
            }
            if (count == 0)
                ans++;
        }
        //now we have to remove start of window and do the calculation!!!
        //we have to reset count also but what should be the condition!!
        if (mp.count(s[i]) > 0)
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
    string ptr, ss;
    ptr = "abbabbaa";
    ss = "abba";
    int size, sizz;
    size = sizeof(ptr) / sizeof(ptr[0]);
    sizz = sizeof(ptr) / sizeof(ptr[0]);
    for (int i = 0; i < 4; i++)
    {
        mp[ss[i]]++;
    }
    for (map<char, int>::iterator j = mp.begin(); j != mp.end(); ++j)
    {
        cout << (*j).first << " - " << (*j).second << endl;
    }
    int anss;
    anss = anagram(ptr, size, sizz);
    cout << "the answer is  " << anss << endl;
    return 0;
}