// this is Update bit code

#include <iostream>
using namespace std;

int setBit(int n,int pos){
    return ((n | (1<<pos)));
}
int updateBit(int n,int pos,int value){
    int mask=~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));
}
int main(){
    cout<<updateBit(5,1,1);
    return 0;
}