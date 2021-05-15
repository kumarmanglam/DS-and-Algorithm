#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//naive solution using inbuilt function -- O(nlogn)time
bool areanagram(string s1,string s2){
    if(s1.length()!=s2.length()){
        if(s1.length()!=s2.length())
            return false;
        sort(s1.length(),s1.length());
        sort(s2.length(),s2.length());
        return (s1==s2);
    }
}

//efficient solution logic is like moore voting algorithm
//one string element will add a vote and another will delete a vote
// bool areangrams(string s1,string s2){
//     if(s1.length()!=s2.length())
//         return false;
//     int count[CHAR]={0};
//     for(int i=0;i<s1.length();i++){
//         count[s1[i]]++;
//         count[s2[i]]--;
//     }
//     for(int i=0;i<CHAR;i++){
//         if(count!=0)    
//             return false;
//     }
//     return true
// }

int main(){
    string s1="AABA";
    string s2="ABAA";
    cout<<areanagram(s1,s2);
    return 0;
}