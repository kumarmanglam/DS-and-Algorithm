#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    map<int,int> m;
    int a,k;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>k;
        m[k]++;
    }
    for(map<int,int>::iterator j=m.begin();j!=m.end();++j)
    {
        cout<<(*j).first<<"  "<<(*j).second<<endl;
    }
    cout<<m[2];
    return 0;
}