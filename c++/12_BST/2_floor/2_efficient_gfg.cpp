#include <iostream>
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
//floor 
//iterative solution            //naive 
node *floor(node *root,int x){
    node *res;
    while(root!=NULL){
        if(root->key==x)
            return root;
        else if(root->key>x)
            root=root->left;
        else{
            res=root;
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
    node *res=floor(root,55);
    cout<<res->key;
    return 0;
}
