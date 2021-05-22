#include <iostream>
using namespace std;

//tower of honoi 
void tower(int n,char a,char b,char c){
    tower(n,a,c,b);
    cout<<a<<" -"<<c;
    tower(n,b,c,a);
}


int main(){
    cout<<tower(2,"s","h","d");

  return 0;
}