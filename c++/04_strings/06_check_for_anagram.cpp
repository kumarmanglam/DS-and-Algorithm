#include<bits/stdc++.h>
using namespace std;

//naive solution using inbuilt function -- O(nlogn)time
bool areanagram(string s1,string s2){
    if(s1.length()!=s2.length())
        return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);
}


// efficient solution logic is like moore voting algorithm
// one string element will add a vote and another will delete a vote
bool anagrams(string s1,string s2){
    if(s1.length()!=s2.length())
        return false;
    int count[CHAR]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++){
        if(count[i]!=0)    
            return false;
    }
    return true;
}//debugging left in this code ->4 errors

int main(){
    string s1="AABA";
    string s2="ABAA";
    cout<<anagrams(s1,s2);
    return 0;
}