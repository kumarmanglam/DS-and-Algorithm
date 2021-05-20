#include <iostream>
#include <unordered_set>
using namespace std;


//naive solution
int inti(int arr1[],int m,int arr2[],int n){
    int res=0;
    for(int i=0;i<m;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr1[i]==arr1[j]){
                flag=true;
                break;
            }
        }
        if (flag==true)
            continue;
        for(int k=0;k<n;k++){
            if(arr1[i]==arr2[k]){
                res++;
                break;
            }
        }
    }
    return res;
}

// efficient solution 3 traversal
int intersection(int arr1[],int m,int arr2[],int n){
    unordered_set <int> a;
    unordered_set <int> b;
    for(int i=0;i<m;i++){
        a.insert(arr1[i]);
    }
        for(int i=0;i<m;i++){
        b.insert(arr2[i]);
    }
    int res=0;
    for(int x:a)
        if(b.find(x)!=b.end()){
            res++;
        }

    return res;
}

//efficient solution 2 two traversal  
int intersectp(int arr1[],int m,int arr2[],int n){
    unordered_set <int> a;
    int res=0;
    for(int i=0;i<m;i++){
        a.insert(arr1[i]);
    }
    for(int i=0;i<n;i++){
        if(a.find(arr2[i])!=a.end()){
            res++;
            a.erase(arr2[i]);
        }
    }
    return res;
}

//efficient by gfg
int intertp(int arr1[],int m,int arr2[],int n){
    unordered_set <int> a(arr1,arr1+m);
    int res=0;
    for(int i=0;i<n;i++){
        if(a.find(arr2[i])!=a.end()){res++;a.erase(arr2[i]);}}
    return res;
}
int main(){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={4,5,6,7,8,9};
    cout<<intertp(arr1,6,arr2,6);
    return 0;
}