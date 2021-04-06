#include <iostream>
using namespace std;
void solve(int s,int d, int h, int n, int &count)
{
    count++;
    if(n==1)
    {
        cout<<"move plate "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    solve(s,h,d,n-1,count);
    cout<<"move plate "<<n<<" from "<<s<<" to "<<d<<endl;
    solve(h,d,s,n-1,count);
}
int main()
{
    int s=1,h=2,d=3,n,count=1;
    cin>>n;
    solve(s,d,h,n,count);
    cout<<"count is :"<<count<<endl;
    return 0;
}