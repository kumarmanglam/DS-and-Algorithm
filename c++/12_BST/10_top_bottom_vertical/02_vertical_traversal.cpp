#include <iostream>
#include <queue>
#include <map>
using namespace std;
//push line by line traversed items to vector
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
    map <int,vector<int>> m;
    queue<pair<node*,int>>q;
    
    q.push({root,0});
    while(!q.empty()){
        auto p=q.front();
        node*curr=p.first;
        int hd=p.second;
        m[hd].push_back(curr->key);
        q.pop();
        if(curr->left)
            q.push({curr->left,hd-1});
        if(curr->right)
            q.push({curr->right,hd+1});
    }
    for(auto x:m){
        for(int y:x.second)
            cout<<y<<" ";
        cout<<endl;
    }
}

int main(){
    node* root=new node(56);
    root->left=new node(34);
    root->right=new node(67);
    root->left->left=new node(12);
    root->left->right=new node(14);
    printlevelorder(root);
    return 0;
}
