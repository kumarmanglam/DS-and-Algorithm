#include <iostream>
#include <queue>
#include <map>
using namespace std;

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

void topview(node *root){
    queue<pair<node*,int>> q;
    map<int,int> m;
    int hd=0;
    q.push({root,hd}); 
    while(!q.empty()){
        auto p=q.front();
        node* curr=p.first;
        hd=p.second;
        q.pop();
        if(m.find(hd)==m.end())
            m[hd]=curr->key;
        if(curr->left)
            q.push({curr->left,hd-1});
        if(curr->right)
            q.push({curr->right,hd+1});
    }
    for(auto x:m){
        cout<<x.second<<" ";
    }
}


int main(){
    node* root=new node(15);
    root->left=new node(26);
    root->left->left=new node(3);
    root->right=new node(20);
    root->right->left=new node(18);
    root->right->left->left=new node(17);
    root->right->right=new node(50);
    
    topview(root);
    
    return 0;
}
