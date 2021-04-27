
/**this check palindrome code
--------------------------------------------------------------------------------------------------------
#include <stdio.h>

int oneDigit(int num)
{
    return (num >= 0 && num < 10);
}

bool isPalUtil(int num, int* dupNum)
{
    if (oneDigit(num))
        return (num == (*dupNum) % 10);
    if (!isPalUtil(num / 10, dupNum))
        return false;
    *dupNum /= 10;
    return (num % 10 == (*dupNum) % 10);
}
int isPal(int num)
{
    if (num < 0)
        num = -num;
    int* dupNum = new int(num);
 
    return isPalUtil(num, dupNum);
}
int main()
{
    int n = 12321;
    isPal(n) ? printf("Yesn") : printf("Non");
 
    n = 12;
    isPal(n) ? printf("Yesn") : printf("Non");
 
    n = 88;
    isPal(n) ? printf("Yesn") : printf("Non");
 
    n = 8999;
    isPal(n) ? printf("Yesn") : printf("Non");
    return 0;
}
*/
/**this is insertion code of linkedlist
---------------------------------------------------------------------------------------------------------------------
//this is insertion code of linkedlist
#include <iostream>
using namespace std;
struct node
{
    int data;
    node * next;
};
struct node* he= NULL;
void printLL()
{
    node * temp=he;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
void insert (int data)
{
    node* temp= new node();
    temp->data=data;
    temp->next=NULL;
    node *p=he;
    if (he==NULL)
    {
         he=temp;
         return;
    }
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
}
int main()
{
    int n;
    cout<<"how many elements are to be stored ?"<<"\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter an element";
        int x;
        cin>>x;
        insert(x);
    }
    printLL();
    return 0 ;
}
this is knap sack  v	
*/
/**this is knap sack  v
------------------------------------------------------------------------------------------------------------------

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
*/
/**this is partition code from quicksort!!!
--------------------------------------------------------------------------------------------------------------------

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
*/