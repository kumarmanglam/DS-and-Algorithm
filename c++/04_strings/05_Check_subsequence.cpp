#include <iostream>
#inlcude <string>
using namespace std;

int checksubsequence(string st1,string st2){
	int j=0;
	for(int i=0;i<st1.length() && j<st2.length();i++){
		if(st1[i]==st2[j]
		   j++;
	return (j==st2.length);
		  
int main(){
	string st1="geeksforgeeks";
	string st2="grges";
	cout<<checksubsequence(st1,st2);
