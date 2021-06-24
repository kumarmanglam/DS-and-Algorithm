#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string>m;
    m[5]="gfg";
    m.insert({10,"gg"});
    m[2]="a";
    m[60]="aa";
    m[15]="bb";
    auto it=m.upper_bound(2);
    if(it!=m.end())
        cout<<(*it).first<<endl;
    else
        cout<<"greater value"<<endl;
    cout<<endl;
    
    m.erase(5);
    cout<<"size: "<<m.size()<<endl;

    m.erase(m.find(15),m.end());
    cout<<"size: "<<m.size()<<endl;
    
    return 0;
}
