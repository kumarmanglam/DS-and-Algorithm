#include <iostream>
using namespace std;

struct node{
    int key;
    node* left;
    node* right;
    node(int x){
        left=NULL;
        right=NULL;
        key=x;
    }
};

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

int main(){
	node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(50);
	
	
	int k;
	cin>>k;
    cout<<"\n";
    kd(root,k);
    
    return 0;
}
