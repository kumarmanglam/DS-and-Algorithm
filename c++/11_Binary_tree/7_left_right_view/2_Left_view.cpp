//code idea from Apna college

#include <iostream>
#include <queue>
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

void printrightview(node* root){
    if(root==NULL){return;}
    queue<node*>q;
    q.push(root);
    
    while(!q.empty()){
        
        int size=q.size();
        for(int i=0;i<size;i++){
            node* curr=q.front();
            q.pop();
            if(i==0){
                cout<<curr->key<< " ";
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if( curr->right!=NULL){
                q.push( curr->right);
            }
        }
    }
}
//          9
//         / \
//        12 14
//       /   /  \
//      13  23   17

int main(){
    node* root=new node(9);
    root->left=new node(12);
    root->right=new node(14);
    root->left->left=new node(13);
    root->right->left=new node(23);
    root->right->right=new node(17);
    
    printrightview(root);
    return 0;
}
