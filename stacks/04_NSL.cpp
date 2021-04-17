#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector <int> v;
stack <int> s;
void nextsmaller(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if (s.size()==0)
            v.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i])
            v.push_back(s.top());
        else if(s.size()>0 && s.top()>=arr[i])
        {
            while (s.size()>0 && s.top()>=arr[i])
                s.pop();
            if (s.size()==0)
                v.push_back(-1);
            else v.push_back(s.top());
        }
    s.push(arr[i]);
    }
}
int main(){
    int arr[100]={6,2,5,4,5,1,6};
    int size=7;
    nextsmaller(arr,size);
    for(int i=0;i<size;i++)
        cout<<v[i]<<"|";
    return 0;
}