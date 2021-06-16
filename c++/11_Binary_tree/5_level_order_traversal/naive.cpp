#include <iostream>
#include <algorithm>
using namespace std;
// level order traversal o(n^2)
struct node{
    int key;
    node* left;
    node* right;
    node(int k){
        key=k;
        right=left=NULL;
    }
};

int height(node* root){
    if (root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right)) +1;
}
void kd(node* root,int k){
    if(root==NULL)return;
    if(k==0){
        cout<<root->key<<" ";
    }           
    else{                                   //else condition is neccessary here otherwise we will check for all node present below level k
        kd(root->left,k-1);
        kd(root->right,k-1);
    }
}
void printkd(node* root,h){
    for(int i=1;i<=h;i++){
        kd(root,i);
    }
}
int main(){
	node *root=new node(10)
	root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(50);
	int h=height(root);
	printkd(root,h);
    return 0;
}
