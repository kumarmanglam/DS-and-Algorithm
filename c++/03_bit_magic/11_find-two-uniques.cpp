#include <iostream>
using namespace std;

int getBit(int n,int pos){
    return ((n&(1<<pos))!=0);
}

int Twouniques(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum^=arr[i];
    }
    int setbit=0,pos=0,temp=0;
    temp=xorsum;
    //mismatched position 
    while(setbit!=1){
        setbit=xorsum&1;
        pos++;
        xorsum=xorsum>>1;
    }//jab loop se niklenge ek pos extra add ho jygi
    int newxor=0;
    //mismatched position ki respect m puri
    //loop chalegi taki ek unique mil jaye
    for(int i=0;i<n;i++){
        if(getBit(arr[i],pos-1)){
            newxor^=arr[i];
        }
    }
    cout<<newxor<<endl;
    //doosra unique aise niklega
    cout<<(temp^newxor)<<endl;
}

int main(){
    int arr[]={2,2,3,3,4,4,1,9};
    Twouniques(arr,8);
    return 0;
}