#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <string,int>m;
    m["gfg"]=20;//this operator will insert the key if that is not present earlier
    m["ide"]=30;
    m["map"]=15;

    //count function return 0 or 1
    cout<<m.count("ide")<<endl;

    //size function returns number of key value pairs in unordered map
    cout<<m.size()<<endl;

    //erase function remove key value pair 
    m.erase("ide")<<endl;
    //we can also pass a iterator in erase function
    m.erase(m.begin());//rarely used
    //we can also pass ending 
    m.erase(m.begin()+m.end());

}