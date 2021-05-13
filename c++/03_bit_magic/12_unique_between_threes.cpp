#include <iostream>
using namespace std;

bool getbit(int n,int pos){
    return (n&(1<<pos))==1;
}

int setBit(int n,int pos){
    return n|(1<<pos);
}

int uniquebtwthrees(int arr[],int n){
    int result;
    for(int i=0;i<64;i++){
        int sum;
        for(int j=0;j<n;j++){
            if(getbit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result =setBit(result,i);
        }
    }
    return result;
}

int main(){
    int arr[]={4,4,4,5,5,5,6,6,6,8};
    cout<<uniquebtwthrees(arr,10)<<endl;
    return 0;
}