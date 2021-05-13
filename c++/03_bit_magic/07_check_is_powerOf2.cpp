#include <iostream>
using namespace std;

bool ispowerof2(int n){
    //edge case is when n is 0
    return n && !(n&n-1);
}

int main(){
    cout<<ispowerof2(92);
    return 0;
}