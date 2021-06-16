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
bool childrensumprop(node* root){
    if(root==NULL)
        return true;
    if(root->left==NULL && root->right==NULL)
        return true;
    int sum=0;
    
    if(root->left!=NULL)
        sum+=root->left->key;
    if(root->right!=NULL)
        sum+=root->right->key;
    
    return (root->key==sum && childrensumprop(root->left)) && childrensumprop(root->right);
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
    root->right->right=new node(17);
    cout<<childrensumprop(root);
    return 0;
}
