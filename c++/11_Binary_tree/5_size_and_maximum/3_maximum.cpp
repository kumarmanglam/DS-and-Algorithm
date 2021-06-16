#include <iostream>
#include <queue>
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

int maxi(node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(root->key,max(maxi(root->left),maxi(root->right)));
    }
}



int main(){
    node* root=new node(56);
    root->left=new node(34);
    root->right=new node(679);
    root->left->left=new node(12);
    root->left->right=new node(14);
    cout<<maxi(root);
    return 0;
}
