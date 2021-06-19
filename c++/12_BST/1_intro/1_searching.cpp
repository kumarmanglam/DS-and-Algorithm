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
// searching in BST
bool search(node* root,int k){
    if(root==NULL){
        return false;
    }
    if(root->key==k){
        return true;
    }
    if(root->key>k){
        search(root->right,k);
    }
    if(root->key<k){
        search(root->left,k);
    }
}
//          35
//         / \
//        15 20
//       /   /  \
//      15  8   12

int main(){
    node* root=new node(9);
    root->left=new node(12);
    root->right=new node(14);
    root->left->left=new node(13);
    root->right->left=new node(23);
    cout<<search(root,13);
    return 0;
}
