#include <iostream>
using namespace std;

//tower of honoi 
void tower(int n,char a,char b,char c){
  if(n==1){
    cout<<a<<" -"<<c;
  }
    tower(n-1,a,c,b);//a to b using c
    cout<<a<<" -"<<c;
    tower(n-1,b,a,c);//b to c using a
}


int main(){
    cout<<tower(2,"s","h","d");

  return 0;
}