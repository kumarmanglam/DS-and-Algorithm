#include <iostream>
#include <string>
using namespace std;

//this is the naive solution to pattern searching --O(N^2)time 
void patternsearch(string s,string str){
    int n=s.length();
    int m=str.length();
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<m;j++){
            if(s[i+j]!=str[j]){
                break;
            }
        }     
        if(j==m){
            cout<<i<<" ";
        }
    }
}


//Naive algorithm for distinct elements allowed -- O(n) time 
void patternsearc(string s,string str){
    int m=str.length();
    for(int i=0;i<s.length();){
        int j=0;
        for(;j<str.length();){
            if(s[i+j]!=str[j]){
                break;
            }
            j++;
        }
        if(j==m)
            cout<<"from "<<i<<" to "<<i+j<<endl;
        if(j==0)
            i++;
        else
            i=i+j;
    }
}



int main(){
    string s="oooop";
    string str="oop";
    patternsearc(s,str);
    return 0;
}