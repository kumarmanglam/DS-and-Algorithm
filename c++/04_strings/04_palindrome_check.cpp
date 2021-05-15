#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//naive gfg1 using reverse algo
bool ifpal(string &str){
    string rev=str;
    reverse(rev.begin(),rev.end());
    return (rev==str);
}


//(intuitive)using two pointer approach
bool palindrome(string str){
    int j=str.length()-1,i=0;
    while (i<j){
        if(str[i++]!=str[j--])
            return false;
    }
    return true;
}


int main(){
    string st="abcba";
    cout<<ifpal(st);
    return 0;
}
