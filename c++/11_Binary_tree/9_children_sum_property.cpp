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
//-----
bool childsum(node *root){
    if(root==NULL)
        return true;
    if(root->left==NULL && root->right==NULL)
        return true;
    int sum=0;
    if(root->left!=NULL)sum+=root->left->key;
    if(root->right!=NULL)sum+=root->right->key;
    
    return (root->key==sum && childsum(root->left) && childsum(root->right));
}



//          35
//         / \
//        15 20
//       /   /  \
//      15  8   12

int main(){
    node* root=new node(35);
    root->left=new node(15);
    root->right=new node(20);
    root->left->left=new node(15);
    root->right->left=new node(8);
    root->right->right=new node(12);
    cout<<childsum(root);
    return 0;
}
