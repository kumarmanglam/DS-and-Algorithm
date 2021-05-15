#include <iostream>
using namespace std;

int main(){
  string s1="abc";
  string s2="bgf";
  if(s1==s2)
    cout<<"same";
  else if (s1<s2)
    cout<<"less";
  else
      cout<<"greater" ;
}//using operator from string class instead of using strcmp
