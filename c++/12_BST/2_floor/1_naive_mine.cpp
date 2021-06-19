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
int floorof(node *root,int x){
    node *curr=root;
    int maxtillnow=0;
    while(curr!=NULL){
        if((curr->key)<x){
            maxtillnow=max(curr->key,maxtillnow);
            curr=curr->right;
        }
        else if(curr->key>x){
            curr=curr->left;
        }
        else {
            return maxtillnow=curr->key;
        }
    }
    return maxtillnow;
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
    cout<<floorof(root,45);
    return 0;
}
