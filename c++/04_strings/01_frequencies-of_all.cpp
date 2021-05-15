#include <iostream>
using namespace std;

int freq(string str){
    //initializing all elements in count array with zero
    int count[26]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
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