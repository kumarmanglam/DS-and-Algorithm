#include <iostream>
using namespace std;
int main(){
    //left shift operator
    cout<<("left shift operator ")<<endl;
    int x=3;
    cout<<(x<<1)<<endl;
    cout<<(x<<2)<<endl;
    int y=4;
    int z=(x<<y);
    cout<<z<<endl;

    //right shift operator
    cout<<("right shift operator ")<<endl;
    int a=33;
    cout<<(a>>1)<<endl;
    cout<<(a>>2)<<endl;
    int b=4;
    int c=(a>>y);
    cout<<z; 
    
    //bitwise not operator
    cout<<("bitwise not operator ")<<endl;
    int m=1;
    cout<<(~m)<<endl
    m=5;
    cout<<(~m)<<endl;
    return 0;
}