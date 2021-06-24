#include <iostream>
#include <climits>
using namespace std;
//inorder traversal should be sorted also we are not using extra O(n) space
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

bool isbst(node* root,int &prev){
    if(root==NULL) return true;
    
    if(isbst(root->left,prev)==false)return false;
    
    if(root->key<=prev)return false;
    
    prev=root->key;
    
    return isbst(root->right,prev);
}


int main(){
    node* root=new node(15);
    root->left=new node(10);
    root->left->left=new node(1);
    root->left->right=new node(14);
    root->right=new node(100);
    int mn=INT_MIN;
    cout<<isbst(root,mn);
    return 0;
}
