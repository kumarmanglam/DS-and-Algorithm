#include <iostream>
#include <strings.h>
using namespace std;


//aditya verma solution
void generatesubsets(string ip,string op){
    if(ip.length()==0){
        cout<<op<<"-";
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin());
    generatesubsets(ip,op1);
    generatesubsets(ip,op2);
    return;
}

int main(){
    string ip="abc";
    string op="";
    generatesubsets(ip,op);
    return 0;
}                                    