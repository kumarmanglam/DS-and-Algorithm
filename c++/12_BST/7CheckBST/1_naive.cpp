//correct but not efficient
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

struct node{
    int key;
    node* left;
    node* right;
    node(int k){
        key=k;
        left=right=NULL;
    }
};

int maxvalue(node* root){
    if(root==NULL)
        return INT_MIN;
    int res=root->key;
    int lres=maxvalue(root->left);
    int rres=maxvalue(root->right);
    
    res=max(max(lres,rres),res);
    return res;
}

int minvalue(node* root){
    if(root==NULL)
        return INT_MAX;
    int res=root->key;
    int lres=minvalue(root->left);
    int rres=minvalue(root->right);
    res=min(min(lres,rres),res);
    return res;
}

bool isbst(node* root){
    if(root==NULL) return 1;
    if(root->left!=NULL && maxvalue(root->left)>root->key)
        return 0;
    if(root->right!=NULL && minvalue(root->right)<root->key)
        return 0;
    if(!isbst(root->left) || !isbst(root->right)){
        return 0;
    }
    return 1;
}

int main(){
    node* root=new node(15);
    root->left=new node(10);
    root->left->left=new node(1);
    root->left->right=new node(14);
    root->right=new node(100);
    cout<<isbst(root);
    return 0;
}
