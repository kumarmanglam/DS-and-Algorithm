#include <iostream>
using namespace std;
bool ispair(int arr[],int n){
    int left-0,right=n-1;
    while(left<right){
        if((arr[left]+arr[right])==x)
            return true;
        else if(arr[left]+arr[right]>x)
            right--;
        else
            left--;
    }
    return false;
}

int main(){

    return 0;
}