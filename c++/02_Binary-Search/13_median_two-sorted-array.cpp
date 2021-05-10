#include <iostream>
#include<climits>
using namespace std;
 
double getmed(int A1[],int A2[],int n1,int n2){
    int begin1=0,end1=n1;
    while(begin1<=end1){

        int i1=(begin1+end1)/2;
        int i2=(n1+n2+1)/2-i1;

        //assigning
        int min1=(i1==n1)?INT_MAX:A1[i1];
        int max1=(i1==0)?INT_MIN:A1[i1-1];
        int min2=(i2==n2)?INT_MAX:A2[i2];
        int max2=(i2==0)?INT_MAX:A2[i2-1];

        //comparision
        if(max1<min2 && max2<=min1){
            if((n1+n2)%2==0){
                return ((double)max(max1,max2)+min(min1,min2)/2);
            }
            else 
                return ((double)max(max1,max2));
        }

        //reassiging
        else if(max1>max2) 
            end1=i1-1;
        else    
            begin1=i1+1;
    }
}


int main(){
    int a[]={30,40,50,60};
    int arr[]={5,6,7,8,9};
    cout<<getmed(a,arr,4,5);

    return 0;
}