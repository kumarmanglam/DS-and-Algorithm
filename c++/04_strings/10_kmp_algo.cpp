#include <iostream>
#include <strings.h>
using namespace std;

int longestops(string s,int n){
    //decreasing the length 
    for(int i=n-1;i>0;i--){
        bool flag=true;
        //matching prefix and suffix
        for(int j=0;j<i;j++){
            if(s[j]!=s[n-i+j]){
                flag=false;
            }
        }
        if (flag==true)
            return i;
    }
    return 0;
}
int makelps(string str){
    int maxi=0;
    for(int i=0;i<str.length();i++){
        maxi=(longestops(str,i+1),maxi);
    }
    return maxi;
}


int main(){
    string st="abababa";
    cout<<longestops(st,7);
    cout<<makelps(st);
    return 0;
}