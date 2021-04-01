// this is brute force recursion method 

#include <iostream>
using namespace std;
int max(int a, int b) { return (a > b) ? a : b; }
int knapsack(int wt[],int val[], int w, int n)//return max value that bag can have
{
    if (n==0||w==0) //base case
        return 0;
    if (wt[n-1]<=w) //nth item is included or not
        return max((val[n-1]+knapsack(wt,val,w-wt[n-1],n-1)), knapsack(wt,val,w,n-1));
    else //weight is greater than bag so item is not included
        return knapsack(wt,val,w,n-1);
}

int main()
{
    int n,w=7,answer;
    int wt[]={1,3,4,5};
    int val[]={1,4,5,7};
    n=sizeof(val)/sizeof(val[0]);
    answer=knapsack(wt,val,7,4);
    cout<<"Maximum value that can be kept in the bag is "<<answer;
}
