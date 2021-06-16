//preorder traversal logic
//recursive code

#include <iostream>
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
int maxlevel=0;
void printleft(node* root,int level){
    if(root==NULL)
        return;
    if(maxlevel<level){
        cout<<root->key<<" ";
        maxlevel=level;
    }
    printleft(root->left,level+1);
    printleft(root->right,level+1);
} 

void printleftview(node* root){
    printleft(root,1);
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
    
    printleftview(root);
    return 0;
}
