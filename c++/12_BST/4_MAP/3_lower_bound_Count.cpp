#include <iostream>
#include <map>
using namespace std;

int main(){
    
    map <int,string>m;
    m.insert({5,"gfg"});
    m.insert({2,"ide"});
    m.insert({3,"practice"});
    
    if(m.find(5)==m.end())
        cout<<"not found";
    else 
        cout<<"found";
    cout<<endl;
    
    if(m.count(5)==0)
        cout<<"not found";
    else
        cout<<"found";
    cout<<endl;
    
    auto it=m.lower_bound(7);
    if(it!=m.end())
        cout<<(*it).first<<" ";
    else 
        cout<<"no equal or graeter value";
        
    return 0;
}
