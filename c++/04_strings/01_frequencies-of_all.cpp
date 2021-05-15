#include <iostream>
using namespace std;

int freq(string str){
    //initializing all elements in count array with zero
    int count[26]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]-'a']++;//we use individual characters as characters
    }
    for(int i=0;i<26;i++){//this is considered as constant work becouse upper limit is always fixed to 26 so O(1):
        if(count[i]>0){
            cout<<(char)(i+'a')<<" "<<count[i]<<" | ";
        }
    }
}

int main(){
    string str={'b','a','b','t'};
    freq(str);  
    return 0;
}