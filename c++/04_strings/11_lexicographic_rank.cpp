#include <iostream>
using namespace std;

const int CHAR=256;

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}

int lexrank(string & str)
{
    int res=1;
    int n=str.length();
    int mul=fact(n);
    int count[CHAR]={0};
    for(int i=0;i<n;i++)
        count[str[i]]++;
    for(int i=1;i<CHAR;i++)
        count[i]+=count[i-1];
    for(int i=0;i<n-1;i++){
        mul=mul/(n-i);
        res=res + count[str[i]-1]*mul;
        for(int j=str[i];j<str[i];j<CHAR;j++)
            count[j]--;
    }
    return res;
}

int main(){
    string st="manglam";
    int ans=lexrank(st);
    cout<<ans;
    return 0;
} 