#include <iostream>
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
//recusive insertion time o(height) space o(height) 
node* insert(node *root,int x){
    if(root==NULL){
        return new node(x);
    }
    else if(root->key<x){
        root->key=insert(root->right,x);
    }
    else {
        root->left=insert(root->left,x);
    }
}

//iterative time o(height) 
node* insert(node *root,int x){
    node *temp=new node(x);
    node *parent=NULL, *curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->key>x){
            curr=curr->left;
        }
        else if(curr->key<x){
            curr=curr->right;
        }
        else {
            return root;
        }
    }
    if(parent==NULL){           //edge case when given bst is NULL
        return temp;
    }
    if(parent->key>x){
        parent-left=temp;
    }
    else{
        parent->right=temp;
    }
    return root;
}


int main(){
    node* root=new node(9);
    root->left=new node(12);
    root->right=new node(14);
    root->left->left=new node(13);
    root->right->left=new node(23);
    cout<<search(root,13);
    return 0;
}
