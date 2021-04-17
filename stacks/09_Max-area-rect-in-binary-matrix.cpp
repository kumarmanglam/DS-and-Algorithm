#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
vector <int> ll;
vector <int> rr;
stack <pair<int,int>> s;
stack <pair<int,int>> ss;
void NsL(vector <int>&arr,int n)
{
    for (int i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            ll.push_back(-1);
        }
        else if(s.size()>0 && s.top().first<arr[i])
        {
            ll.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=arr[i])
        {
            while(s.size()>0 && s.top().first>=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
                ll.push_back(-1);
            else 
                ll.push_back(s.top().second);
        }
    s.push({arr[i],i});
    }
}
void NsR(vector <int>&arr,int n)
{
    for (int i=n-1;i>=0;i--)
    {
        if(ss.size()==0)
        {
            rr.push_back(n);
        }
        else if(ss.size()>0 && ss.top().first<arr[i])
        {
            rr.push_back(ss.top().second);
        }
        else if(ss.size()>0 && ss.top().first>=arr[i])
        {
            while(ss.size()>0 && ss.top().first>=arr[i])
            {
                ss.pop();
            }
            if(ss.size()==0)
            {
                rr.push_back(n);
            }
            else 
                rr.push_back(ss.top().second);
        }
    ss.push({arr[i],i});
    }
}
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
int MAH(vector <int>&arr,int n)
{
    NsL(arr,n);
    NsR(arr,n);
    reverse(rr.begin(),rr.end());
    int wid[100];
    for (int i=0;i<n;i++)
    {
        wid[i]=rr[i]-ll[i]-1;
    }
    int are[100];
    for (int i=0;i<n;i++)
    {
        are[i]=wid[i]*arr[i];
    }
    int maxi;
    maxi=largest(are,n);
    return maxi;
}

int main()
{
    vector<vector<int>> arr;
    arr = {{0, 1, 1, 0}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 0, 0}};
    int n = 4, m = 4;
    vector<int> v;
    for (int j = 0; j < m; j++)
        v.push_back(arr[0][j]);
    int mx = MAH(v, m);
    cout << endl
         << mx << " mx intially " << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
                v[j] = 0;
            else
                v[j] = v[j] + arr[i][j];
        }
        cout << endl
             << "******* STEP ********    " << i << endl;
        for (int k = 0; k < m; k++)
        {
            cout << v[k] << " ";
        }
        mx = max(mx, MAH(v, m+1));
        //check in for mistakes and debugging

        //vector at this point
        cout<<"mah is "<<MAH(v,m);
        cout << endl
             << mx << " mx intermin at i equal to ->  " << i << "   and the mah here is " << MAH(v, m) << endl;
    }
    cout << endl
         << mx << "  mx when code ended " << endl;


    cout<<endl<<"if vector is  | 2,3,3,3";
    vector <int> vv;
    vv={2,3,3,3};
    int size=v.size();
    int jj=MAH(vv,size);
    cout <<endl<<jj<<endl;
    return 0;
}

// int main() main fuction which tried initially
// {
//     int arr[10][10]={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
//     int n=4,m=4;
//     vector <int> v;
//     for(int j=0;j<m;j++)
//         v.push_back(arr[0][j]);
//     int mx=MAH(v,m);
//     cout<<endl<<mx<<" mx intially "<<endl;
//     for(int i=1;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if (arr[i][j]==0)
//                 v[j]=0;
//             else
//                 v[j]=v[j]+arr[i][j];
//         }
//         mx=max(mx,MAH(v,m));
//         //checkin for mistakes and debugging
//         cout<<endl<<"******* STEP ********    "<<i<<endl;
//         //vector at this point
//         for(int k=0;k<m;k++)
//         {
//             cout<<v[k]<<" ";
//         }
//         cout<<endl<<mx<<" mx intermin at i equal to ->  "<<i<<"   and the mah here is "<<MAH(v,m)<<endl;
//     }
//     cout<<endl<<mx<<"  mx when code ended "<<endl;
//     return 0;
// }