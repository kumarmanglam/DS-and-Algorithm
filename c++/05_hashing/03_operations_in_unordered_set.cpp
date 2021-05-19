#include <iostream>
#include <unordered_set>
using namespace std;
//it stores unique element only


int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    for(auto it=s.begin();it!=s.end();it++)
        cout<<(*it)<<" ";
    cout<<endl;
    

    //size function
    cout<<s.size()<<" ";

    // find function 
    // if(s.find(15)==s.end())
    //     cout<<" Not found ";
    // else 
    //     cout<<endl<<" Found "<<*(s.find(15));

    //count function it returns 0 or 1
    // cout<<endl<<"calling count function "<<endl; 
    // if(s.count(15))
    //     cout<<endl<<"found";
    // else 
    //     cout<<"Not found: ";

    //erase function
    // cout<<"size before erasing "<<s.size()<<" ";
    // cout<<endl<<"calling erase function "<<endl;
    // s.erase(15);
    // cout<<"size after erasing "<<s.size()<<" ";
    // auto it=s.find(10);
    // s.erase(it);
    // cout<<"size after erasing it    "<<s.size()<<" ";

    //remove function
    s.erase(s.begin(),s.end());
    return 0;
}

