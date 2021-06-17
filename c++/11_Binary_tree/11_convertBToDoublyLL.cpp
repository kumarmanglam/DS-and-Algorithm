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
//o(n)time
node *convert(node *root){
    node *prev=NULL;
    node *treetoll(node *root){
        if(root==NULL) return root;
        node* head=treetoll(root->left);
        if(prev==NULL) {
            head=root;
        }
        else{
            root->left=prev;
            prev->right=root;
        }
        prev=root;
        treetoll(root->right);
        return head;
    }
}
//          35
//         / \
//        15 20
//       /   /  \
//      15  8   12

int main(){
    node* root=new node(9);
    root->left=new node(12);
    root->right=new node(14);
    root->left->left=new node(13);
    root->right->left=new node(23);
    cout<<isbalanced(root);
    return 0;
}
