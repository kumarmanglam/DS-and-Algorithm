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

void serialize(node *root,vector<int>ser){
    if(root!=NULL){
        ser.push_back(root->data);
        serialize(root->left);
        serialize(root->right);
    }
    else{
        ser.push_back(root->data);
        return;
    }
}

int main(){
    node* root=new node(9);
    root->left=new node(12);
    root->right=new node(14);
    serialize(root);
    return 0;
}
