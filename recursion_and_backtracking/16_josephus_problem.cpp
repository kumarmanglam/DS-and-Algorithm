#include <iostream>
#include <vector>
using namespace std;
void solve(vector <int>&vec,int index,int k,int &ans)
{
    if(vec.size()==1)
    {
        ans=vec[0];
        return;
    }
    index=(index+k)%vec.size();
    vec.erase(vec.begin()+index);
    solve(vec,index,k,ans);
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
        vec[i]=i+1;
    k--;
    int ans=-1;
    int index=0;
    solve(vec,index,k,ans);
    cout<<ans<<endl;
    return 0;
}