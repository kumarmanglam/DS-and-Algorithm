#include <iostream>
using namespace std;

int main(){
  string str=" geeksforgeeks";//here string is a class
  cout<<str.length()<<" ";//str is object length is class function
  str=str+"xyz";
  cout<<str<<" ";
  cout<<str.substr(1,3)<<" ";//substr is a class function
  cout<<str.find("eek")<<" ";//find is a class function
  return 0;
}
