#include <bits/stdc++.h>
using namespace std;

struct node  
{ 
  int key; 
  struct node *left; 
  struct node *right; 
  node(int k){
      key=k;
      left=right=NULL;
  }
};
//count number of nodes in complete binary tree
int leftskew(node* root,int count){
    while(root!=NULL){
        count+=1;
        root=root->left;
    }
    return count;
}
int rightskew(node* root,int count){
    while(root!=NULL){
        count+=1;
        root=root->right;
    }
    return count;
}
int number(node* root){
    if(root==NULL){
        return 0;
    }
    int left=leftskew(root,0);
    int right=rightskew(root,0);
    if(left==right){
        return pow(2,left)-1;
    }
    else{
        return 1+number(root->left)+number(root->right);
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
    root->left->right=new node(57);
    root->left->left=new node(13);
    root->right->left=new node(23);
    cout<<number(root);
    return 0;
}
