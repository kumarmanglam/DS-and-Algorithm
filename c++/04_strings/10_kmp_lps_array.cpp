#include <bits/stdc++.h> 
using namespace std; 

//method 1 is naive solution taking o(n^3) time 
int longPropPreSuff(string str, int n){
    for(int len=n-1;len>0;len--){
        bool flag=true;
        for(int i=0;i<len;i++)
            if(str[i]!=str[n-len+i])
                flag=false;
                
        if(flag==true)
            return len;
    }
    return 0;
}

void fillLPS(string str, int *lps){
    for(int i=0;i<str.length();i++){
        lps[i]=longPropPreSuff(str,i+1);
    }
}
//mthod 2 is efficient solution o(N) time
void fillLPSm2(string str, int *lps){
    int n=str.length(),len=0;
    lps[0]=0;
    int i=1;
    while(i<n){
        if(str[i]==str[len])
        {len++;lps[i]=len;i++;}
        else
        {if(len==0){lps[i]=0;i++;}
            else{len=lps[len-1];}
        }
    }
}
 
int main() 
{ 
    string txt = "abacabad";
    int lps[txt.length()];
    fillLPSm2(txt,lps);
    for(int i=0;i<txt.length();i++){
        cout<<lps[i]<<" ";
    }
    
    return 0; 
} 
