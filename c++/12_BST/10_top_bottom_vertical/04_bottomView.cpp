#include <bits/stdc++.h>
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

void bottomView(Node *root){
    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(q.empty()==false){
        auto p=q.front();
        Node *curr=p.first;
        int hd=p.second;
        mp[hd]=(curr->key);
        q.pop();
        if(curr->left!=NULL)
            q.push({curr->left,hd-1});
        if(curr->right!=NULL)
            q.push({curr->right,hd+1});
    }
    for(auto x:mp){
        cout<<x.second<<" ";
    }
}

int main() {
	
	Node *root = new Node(15);  
    root->left = new Node(26);  
    root->right = new Node(20);  
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->right = new Node(50);
    
    bottomView(root);
          
    return 0;  
	
}
