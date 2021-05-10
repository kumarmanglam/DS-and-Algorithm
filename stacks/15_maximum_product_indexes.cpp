#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
stack <pair<int,int>> s;
vector <int> rr;
stack <pair<int,int>> ss;
vector <int> v;
int combined[100];
void nearestgreatertoright(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
            rr.push_back(-1);
        else if(s.size()>0 && s.top().first>arr[i]){
            rr.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first<=arr[i])
        {
            while (s.size()>0 && s.top().first<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
                rr.push_back(-1);
            else {
                rr.push_back(s.top().second);
            }
        }
    s.push({arr[i],i});
    }
}

void nearestgreatertoleft(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(ss.size()==0)
            v.push_back(-1);
        else if(ss.size()>0 && ss.top().first>arr[i]){
            v.push_back(ss.top().second);
            
        }
        else if(ss.size()>0 && ss.top().first<=arr[i])
        {
            while (ss.size()>0 && ss.top().first<=arr[i])
            {
                ss.pop();
            }
            if(ss.size()==0)
                v.push_back(-1);
            else {
                v.push_back(ss.top().second);
                
            }
        }
    ss.push({arr[i],i});
    }
}
void product(int n){
    for(int i=0;i<n;i++){
        combined[i]=rr[i]*v[i];
    }
}
int mxiproduct(int arr[],int n){
    nearestgreatertoright(arr,n);//R[i]
    reverse(rr.begin(),rr.end());
        for(int i=0;i<n;i++){
        if(rr[i]!=-1){
            rr[i]+=1;
        }
        else {
            rr[i]=0;
        }
    }
    nearestgreatertoleft(arr,n);//L[i]
    for(int i=0;i<n;i++){
        if(v[i]!=-1){
            v[i]+=1;
        }
        else {
            v[i]=0;
        }
    }
    product(n);//p[i]array
    int mx=0;
    for(int i=0;i<n;i++){//maxinp[i] array
        mx=max(mx,combined[i]);
    }
    return mx;
}
int main()
{
    int orr[]={1,1,1,1,0,1,1,1,1,1};
    int k=sizeof(orr)/sizeof(orr[0]);
    int answer=mxiproduct(orr,k);
    cout<<answer;

}











/**brute int main run
int main()
{
    int arr[]={5,4,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    nearestgreatertoright(arr,n);
    reverse(rr.begin(),rr.end());
    for(int i=0;i<n;i++){
        if(rr[i]!=-1){
            rr[i]+=1;
        }
        else {
            rr[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        cout<<rr[i];
    }


    cout<<endl<<"another one"<<endl;



    int arra[]={5,4,3,4,5};
    int m=sizeof(arra)/sizeof(arra[0]);
    nearestgreatertoleft(arra,m);
    for(int i=0;i<n;i++){
        if(v[i]!=-1){
            v[i]+=1;
        }
        else {
            v[i]=0;
        }
    }
    for(int i=0;i<m;i++){
        cout<<v[i];
    }

    //checking new array
    cout<<endl<<"combined array"<<endl;

    //connot print this combined array correctly
    
    // for(int i=0;i<n;i++){
    //     cout<<combined[i];
    // }


    //finding product
    product(n);

    //findmaximum
    int mx;
    mx=maxinarray(n);


    //answer printed
    cout<<endl<<mx<<endl;
    return 0;
}

*/