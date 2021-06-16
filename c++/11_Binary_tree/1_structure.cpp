#include <iostream>
using namespace std;
//for a empty binary tree we store root data as NULL
struct node{
    node*left;
    node*right;
    int key;
    node(int x){
        key=x;
        left=right=NULL;
    }
}

int main(){
    node* root=new node(56);
    root->left=new node(34);
    root->right=new node(67);
    root->left->left=new node(12);
}
