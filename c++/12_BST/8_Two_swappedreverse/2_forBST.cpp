#include <iostream>
#include <climits>
using namespace std;
//two important examples
//inorder traversal of bst
//4 8 10 60 20 80 100
//4 60 10 20 8 80 100

struct node{
    int key;
    node *left;
    node *right;
    node(int k){
        key=k;
        left=right=NULL;
    }
};
void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
void swaptwo(node *root, node* first, node* second, node* pre){
    if(root==NULL)
        return;
    swaptwo(root->left,first,second,pre);
    if(pre!=NULL && root->key<pre->key){            //we dont want to check null key
        if(first==NULL)
            first=pre;
        second=root;
    }
    pre=root;
    swaptwo(root->right,first,second,pre);
}

int main(){
    node* root=new node(15);
    root->left=new node(26);
    root->left->left=new node(3);
    root->right=new node(20);
    root->right->left=new node(18);
    root->right->left->left=new node(17);
    root->right->right=new node(5);
    
    node*first=NULL;
    node*second=NULL;
    node*pre=NULL;
    swaptwo(root,first,second,pre);
    
    inorder(root);
    cout<<endl;
    
    //swap them
    int a;
    a=first->key;
    first->key=second->key;
    second->key=a;
    inorder(root);
    return 0;
}
