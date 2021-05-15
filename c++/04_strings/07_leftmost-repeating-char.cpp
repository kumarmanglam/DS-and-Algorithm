#include <iostream>
#include <string>
using namespace std;
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
        if(count[str[i]>1)
            return i;
    return -1;
}//SOME ERROR ENCOUNTERED


int main(){
    string st="lqwrpipooia";
    cout<<leftmos(st);
    return 0;
}