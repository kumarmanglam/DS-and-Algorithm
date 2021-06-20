#include <iostream>
#include <algorithm>
using namespace std;
//naive solution is to simply traverse the bst o(n)
struct node{
    int key;
    node* left;
    node* right;
    node(int k){
        key=k;
        left=right=NULL;
    }
};
//ceiling of a number   o(height) time
//iterative solution          
node *ceil(node *root,int x){
    node *res;
    while(root!=NULL){
        if(root->key==x)
            return root;
        else if(root->key>x){
            res=root;
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return res;
}
//          50
//         / \
//        15 70
//       /   /  \
//      13  56   72

int main(){
    node* root=new node(50);
    root->left=new node(15);
    root->right=new node(70);
    root->left->left=new node(13);
    root->right->left=new node(56);
    root->right->right=new node(72);
    node *res=ceil(root,55);
    cout<<res->key;
    return 0;
}
