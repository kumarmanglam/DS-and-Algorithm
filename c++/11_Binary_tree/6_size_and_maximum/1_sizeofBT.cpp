//naive solution to find the size of Bt
#include <iostream>
using namespace std;
//naive solution to find the size of Bt

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

int size(node* root){
    if(root==NULL){
        return 0;
    }
    
    return 1 + size(root->left)+ size(root->right);
}

int main(){
    node* root=new node(56);
    root->left=new node(34);
    root->right=new node(67);
    root->left->left=new node(12);
    root->left->right=new node(14);
    cout<<size(root);
}
