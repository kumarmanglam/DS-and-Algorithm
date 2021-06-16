#include <iostream>
using namespace std;

struct node{
    int key;
    node* left;
    node* right;
    node(int x){
        left=NULL;
        right=NULL;
        key=x;
    }
};

void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
void preorder(node* root){
    if(root!=NULL){
        cout<<root->key<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}
void postorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        inorder(root->right);
        cout<<root->key<<" ";
    }
}

int main(){
    node* root=new node(20);
    root->left=new node(10);
    root->right=new node(30);
    root->right->left=new node(15);
    root->right->right=new node(45);
    
    cout<<"\n";
    inorder(root);
    cout<<"\n";
    preorder(root);
    cout<<"\n";
    postorder(root);
    cout<<"\n";
    
    return 0;
}
