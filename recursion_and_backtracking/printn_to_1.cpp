#include <iostream>
using namespace std;
int printt(int n)
{
    if (n==0){ return 0;}
    cout<<n<<" ";
    printt(n-1);
}
int main(){
    int n=6;
    printt(n);
    return 0;
}