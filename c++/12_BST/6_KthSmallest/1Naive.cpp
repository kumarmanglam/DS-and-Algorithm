
#include <iostream>
#include <set>
using namespace std;

//logic is to do inorder traversal with coution of ascending order

struct node {
    int key;
    struct node* left;
    struct node* right;
    node(int k){
        key=k;
        left=right=NULL;
    }
};

void printkth(node*root,int k,int &count){
    if(root!=NULL){
        printkth(root->left,k,count);
        count++;
        if(count==k){
            cout<<root->key<<" ";
        }
        printkth(root->right,k,count);
    }
}

int main(){
    node* root=new node(15);
    root->left=new node(5);
    root->left->left=new node(3);
    root->right=new node(20);
    root->right->left=new node(18);
    root->right->left->left=new node(17);
    root->right->right=new node(233);
    int count=0;
    printkth(root,4,count);
    return 0;
}
