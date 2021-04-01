#include <iostream>
using namespace std;
int printt(int n)
{
    if (n==0)
    {
        return 0;
    }
    printt(n-1);
    cout<<n<<" ";
}
int main(){
    int n=10;
    printt(n);
  return 0;
}

