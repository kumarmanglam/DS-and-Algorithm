#include <iostream>
#include <string>
#include <climits>
using namespace std;
const int CHAR=256;
//naive solution - check for every character if it repeats o(N^2)time----worst case when all elements are different 
int leftmost(string &str){
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j])
                return i;
        }
    }
}

//efficient solution m2- create a freq array and return element with count >1 o(n)TIME 
int leftmos(string &str){
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++)
        count[str[i]]++;
    for(int i=0;i<str.length();i++)
        if(count[str[i]]>1)
            return i;
    return -1;
}

//efficient solution m3- doing in one traverse only and updating smaller index of repeated element
int leftm(string &str){
    int fIndex[CHAR];
    fill(fIndex,fIndex+CHAR,-1);//filling the array with -1
    int res=INT_MAX;//it will store smaller index
    for(int i=0;i<str.length();i++){
        int fi=fIndex[str[i]];
        if(fi==-1)
            fIndex[str[i]]=i;
        else 
            res=min(res,fi);
    }
    return (res==INT_MAX)?-1:res;
}


int main(){
    string st="lqwrpipooia";
    cout<<leftm(st);
    return 0;
}