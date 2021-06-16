#include <iostream>
#include <queue>
using namespace std;
//naive solution to find the size of Bt

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
int siz(node* root){
    if(root==NULL){
        return 0;
    }
    int si=0;
    queue <node*> q;
    q.push(root);
    while(!q.empty()){
        node* curr=q.front();
        q.pop();
        si++;
        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);
    }
    return si;
}


int main(){
    node* root=new node(56);
    root->left=new node(34);
    root->right=new node(67);
    root->left->left=new node(12);
    root->left->right=new node(14);
    cout<<siz(root);
}
