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
//o(n)time
int isbalanced(node *root){
    if (root==NULL) return -1;
    
    int l=isbalanced(root->left); //check left siubtree
    if(l==-1) return -1;
    
    int r=isbalanced(root->right); // check right subtree
    if(r==-1) return -1;
    
    if(abs(l-r)>1){return -1}      // check the currect node     
    else{
        return max(l,r)+1;
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
    cout<<isbalanced(root);
    return 0;
}
