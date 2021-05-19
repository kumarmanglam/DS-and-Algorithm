#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <string,int>m;
    m["gfg"]=20;//this operator will insert the key if that is not present earlier
    m["ide"]=30;
    m["map"]=15;

    //if find function does not found the key then it return the m.end() iterator
    //m.end() it is pointer pointing just after the element(does not point to any valid element)
    //m.find("ide") will return that particular address where that string is saved 
    if(m.find("ide") != m.end())
        cout<<"found\n";
    else
        cout<<" Not found\n";

    //modification of above find code 
    auto it=m.find("ide");
    if(it!=m.end()){
        cout<<(it->second)<<endl;//value corresponding to a given key
    }

    //we can also use (at) function ---- reference of value if key is present

    for(auto it=m.begin();it!=m.end();it++)
        cout<<(it->first)<<" "<<(it->second)<<endl;
    
    return 0;
}