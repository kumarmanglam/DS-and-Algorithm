#include <iostream>
#include <map>
using namespace std;

int main(){
    
    map<int,int> m;
    m.insert({10,200});
    m[5]=100;                                   //if we access element which is not present then it will get inserted
    m.insert({3,300});
    
    for (auto it=m.begin();it!=m.end();it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;
        
    m.clear();
    cout<<"size: "<<m.size()<<endl;
    cout<<"empty: "<<(m.empty()?"yes":"no")<<endl;
    
    return 0;
}
