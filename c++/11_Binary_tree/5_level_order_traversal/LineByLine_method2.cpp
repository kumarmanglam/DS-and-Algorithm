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

void printlevelorder(node* root){
    if(root==NULL) return;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        int count=q.size();
        for(int i=0;i<count;i++){
            node*curr=q.front();
            q.pop();
            cout<<curr->key<<" ";
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        cout<<" \n";
    }
}

int main(){
    node* root=new node(56);
    root->left=new node(34);
    root->right=new node(67);
    root->left->left=new node(12);
    root->left->right=new node(14);
    printlevelorder(root);
}
