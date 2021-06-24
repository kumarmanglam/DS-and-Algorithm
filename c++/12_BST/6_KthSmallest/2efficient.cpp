#include <iostream>
using namespace std;

struct node{
    int lcount;
    int key;
    node* left;
    node* right;
    node(int k){
        key=k;
        left=right=NULL;
        count=0;
    }
};

node* root(node* root,int x){
    if(root==NULL) return new node(x);
    if(x<root->key){
        root->left=insert(root->left,x);
        root->count++;
    }
    else if(x>root->key){
        root->right=insert(root->right,x);
    }
    return root;
}

node* kthsmallest(node*root,int x){
    if(root==NULL)return NULL;
    int count=root->lcount+1;
    if(count==k)return root;
    if(count>k){
        kthsmallest(root->left,k);
    }
    return ksmallest(root->right,k-count);
}

//code from gfg
//dry run not understood
