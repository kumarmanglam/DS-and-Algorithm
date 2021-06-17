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

const int empty=-1;
int index=0;
node *deserialize(vector <int> &arr){
    if(index==arr.size()) return NULL;
    int val=arr[index];
    index++;
    if(val==empty) return NULL;
    node*root=new node(val);
    root->left=deserialize(arr);
    root->right=deserialize(arr);
    return root;
}

int main(){
    node* root=new node(9);
    root->left=new node(12);
    root->right=new node(14);
    serialize(root);
    return 0;
}
