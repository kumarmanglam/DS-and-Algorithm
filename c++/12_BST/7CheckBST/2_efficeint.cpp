//logic every node has a predefined limit to exist

#include <iostream>
#include <climits>
using namespace std;

struct node{
    int key;
    node* left;
    node* right;
    node(int k){
        key=k;
        left=NULL;
        right=NULL;
    }
};

bool isbst(node* root,int min, int max){
    if(root==NULL) return true;
    
    return (root->key>min && root->key<max && isbst(root->left,min,root->key) && isbst(root->right,root->key,max));
}



int main(){
    node* root=new node(15);
    root->left=new node(10);
    root->left->left=new node(1);
    root->left->right=new node(14);
    root->right=new node(100);
    int mn=INT_MIN;
    int mx=INT_MAX;
    cout<<isbst(root,mn,mx);
    return 0;
}
