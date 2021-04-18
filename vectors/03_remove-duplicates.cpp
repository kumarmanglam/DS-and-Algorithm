#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    vector<int> v={1,2,1,4,54,1,4};
    map<int,int> m;
    for(int i=0;i<7;i++)
    {
        m[v[i]]++;
    }
    vector<int>v1;
    for(map<int,int>::iterator j=m.begin();j!=m.end();++j)
    {
        if((*j).second==1)
            {
                v1.push_back((*j).first);
            }
    }
    vector<int>::iterator ptr;
    for (ptr=v1.begin();ptr!=v1.end();ptr++)
    {
        cout<<*ptr<<"  ";
    }
    cout<<endl;
    for(map<int,int>::iterator j=m.begin();j!=m.end();++j)
    {
        cout<<(*j).first<<"  "<<(*j).second<<endl;
    }
    return 0;
}