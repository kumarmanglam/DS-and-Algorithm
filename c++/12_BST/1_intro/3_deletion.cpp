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
//get successor (next node in inorder traversal)
node *getsuccessor(node *curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr=curr->left;
    return curr;
}


//delete a node
node *delete(node *root,int x){
    if(root==NULL) return root;
    if((root->key)>x) root->left=delete(root,x);
    else if((root->key)<x) root->right=delete(root,x);
    else{
        if(root->left==NULL){
            node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right===NULL){
            node *temp=root->left;
            delete root;
            return temp;
        }
        else{
            node *succ=getsuccessor(root);
            root->key=succ->key;
            root->right=delnode(root->right,succ->key);             //to delete the successor as the value is copied
        }
    }
    return root;
}

//          50
//         / \
//        15 70
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
