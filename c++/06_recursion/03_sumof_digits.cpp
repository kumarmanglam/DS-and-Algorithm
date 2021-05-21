#include <iostream>
using namespace std;

int sumofdigits(int n){
    if(n<9)
        return n;
    return sumofdigits(n/10)+n%10;
}


//iterative solution 
int sumsum(int n){
    int r=0;
    while(n>=0){
        r = r + n%10;
        n=n/10;
    }
    return r;
}

int main(){
    cout<<sumsum(12343);
    return 0;
}