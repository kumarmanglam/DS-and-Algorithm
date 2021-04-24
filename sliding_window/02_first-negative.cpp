#include <iostream>
#include <vector>
#include <list>
using namespace std;
list <int> l;
vector <int> v;
void first_negative(int arr[],int size,int k)
{
    int i=0,j=0;
    while (j<size)
    {
        while ((j-i+1)<k)
        {
            if (arr[j]<0)
                l.push_back(arr[j]);
            j++;
        }
        if ((j-i+1)==k)
        {
            if (arr[j]<0)
                l.push_back(arr[j]);
            if (l.size()==0)
                v.push_back(0);
            else
            {
                v.push_back(l.front());
                if(arr[i]==l.front())
                    l.pop_front();
            }
        i++;
        j++;
        }
    }
}
int main()
{
    int arr[]={12,-1,-7,8,-15,30,16,28};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    first_negative(arr,n,k);
    for(int i=0;i<6;i++)
    {
        cout<<v[i]<<" | ";
    }
    cout<<endl;
    return 0;
}