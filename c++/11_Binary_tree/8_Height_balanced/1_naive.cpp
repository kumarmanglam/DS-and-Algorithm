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

int height(node* root){
    if (root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right)) +1;
}

bool isbalanced(node *root){
    if(root==NULL) return true;
    int lh=height(root->left);
    int rh=height(root->right);
    return (abs(lh-rh)<=1 && isbalanced(root->left) && isbalanced(root->right));
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
    cout<<isbalanced(root);
    return 0;
}
