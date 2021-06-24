#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int,greater<int>>s;//decreasing order
    s.insert(10);
    s.insert(5);
    s.insert(20);
    for(auto it=s.rbegin();it!=s.rend();it++){//increasing order
        cout<<(*it)<<" ";
    }cout<<endl;
    
    auto it=s.find(10);
    if(it==s.end())
        cout<<" Not Found "<<endl;
    else    cout<<" Found ";
    
    s.clear();
    cout<<"\n size : "<<s.size()<<endl;
    
    return 0;
}
