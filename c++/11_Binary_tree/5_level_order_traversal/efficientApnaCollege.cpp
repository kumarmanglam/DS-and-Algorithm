#include <iostream>
#include <queue>
using namespace std;
//method by apna college

struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};

void printlevelorder(node* root){
    if(root==NULL){
        return;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* node=q.front();
        if(node!=NULL){
            cout<<node->data;
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}
int main(){
    node* root=new node(56);
    root->left=new node(34);
    root->right=new node(67);
    root->left->left=new node(12);
    
    printlevelorder(root);
}
