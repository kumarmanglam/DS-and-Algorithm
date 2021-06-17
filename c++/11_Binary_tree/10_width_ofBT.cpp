#include <iostream>
#include <queue>
#include <algorithm>
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

int  width(node* root){
    if(root==NULL) return 0;
    queue<node*>q;
    q.push(root);
    int count=0;
    while(!q.empty()){
        int n=q.size();
        count=max(n,count);
        for(int i=0;i<n;i++){
            node*curr=q.front();
            q.pop();
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
    }
    return count;
}

int main(){
    node* root=new node(23);
    root->left=new node(34);
    root->right=new node(67);
    root->right->left=new node(34);
    root->left->left=new node(12);
    root->left->right=new node(14);
    cout<<width(root);
}
