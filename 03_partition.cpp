#include <iostream>
using namespace std;

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int A[], int low, int high) 
{ 
    int pivot =A[low]; // pivot 
    int i = low, j= high;

    while (i<j)
    {
        do
        {
            i++;
        } while(A[i]<=pivot);
        do
        {
            j--;
        } while(A[j]>pivot);

        if (i<j)
        {
            swap(A[i],A[j]);
        }
    }

    swap(A[low],A[j]);
    return j;

} 


int main() 
{ 
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int ni=partition(arr,0,n );
    cout<<"output is "<<ni<<"\n";
}