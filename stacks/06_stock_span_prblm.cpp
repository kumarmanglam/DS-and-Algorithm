//consecutive or smaller before it
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
stack <pair<int,int>> s;
vector <int> v;
void stock_span(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        if (s.size()==0)
            v.push_back(-1);
        else if(s.size()>0 && s.top().first >arr[i])
            v.push_back(s.top().second);
        else if(s.size()>0 && s.top().first < arr[i])
        {
            while (s.size()>0 && s.top().first<arr[i])
                s.pop();
            if (s.size()==0)
                v.push_back(-1);
            else v.push_back(s.top().second);
        }
    s.push({arr[i],i});
    }
}
int main(){
    int arr[100]={100,80,60,70,60,75,85};
    int size=7;
    vector <int> vec;
    stock_span(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<i-v[i]<<" | ";
        // vec.push_back(i-v[i]);
    }
    return 0;
}