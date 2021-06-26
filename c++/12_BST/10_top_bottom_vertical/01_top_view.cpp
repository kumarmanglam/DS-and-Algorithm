 //vertical sum of bt by using map

#include <bits/stdc++.h>
#include <map>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left;
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

void verticalsum(Node* root,int zero,map <int,int> &m){
    if(root!=NULL){
        verticalsum(root->left,zero-1,m);
        m[zero]+=root->key;
        verticalsum(root->right,zero+1,m);
    }
}

int main() {
	
	Node *root = new Node(10);  
    root->left = new Node(8);  
    root->right = new Node(20);
    root->left->left = new Node(4);
    root->left->right = new Node(9);
    root->right->left = new Node(11);
    root->right->right = new Node(30);  
    root->right->right->left = new Node(25);
   
   map <int,int> m;
   
   verticalsum(root,0,m);
          
    for (auto it=m.begin();it!=m.end();it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;

    return 0;  
}
