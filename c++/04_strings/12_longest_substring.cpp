#include <iostream>
#include <vector>
#include <string>
using namespace std;
//to check wether a element is already present and if not present 
//then mark that character as present 
bool aredistinct(string str,int i,int j){//O(N) time complexity
    vector <bool> visited(256);
    //doing operations between the range of i and j
    for(int k=i;k<=j;k++){
        if(visited[str[k]]==true)
            return false;
        visited[str[k]]=true;
    }
    return false;
}

//to check every length is filled with distinct elements 
int longestdistinct(string str){
    int n=str.length(),res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(aredistinct(str,i,j))
                res=max(res,j-i+1);
        }
    }
}

//better solution o(n^2)
int longestcharacters(string &str){
    int n=str.length(),res=0;
    for(int i=0;i<n;i++){
        vector <bool> visited (256);
        for(int j=i;j<n;j++){
            if(visited[str[j]]==true)
                break;
            else {
                res=max(res,j-i+1);
                visited[str[j]]=true;
            }
        }
    }
}

//efficient solution (gfg) o(N)
int longdis(string str){
    int n=str.length(),res=0;
    vector <int> prev(256,-1);//it stores the index of element when that was last seen
    int i=0;
    for(int j=0;j<n;j++){
        i=max(i,prev[str[j]]+1;);
        int maxend=j-i+1;
        res=max(maxend,res);
        prev[str[i]]=j;
    }
    return res;
}

int main(){
    string str="string";
    cout<<longestcharacters(str)<<endl;
    return 0;
}
