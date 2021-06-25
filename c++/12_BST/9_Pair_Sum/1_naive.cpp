#include <iostream>
#include <vector>
using namespace std;

struct node{
    int key;
    node *left;
    node *right;
    node(int k){
        key=k;
        left=right=NULL;
    }
};
//naive method is convert tree into vector 

void treetovector(node* root,vector <int> &v){      //it is important to pass vector by reference
    if(root!=NULL){
        treetovector(root->left,v);
        v.push_back(root->key);
        treetovector(root->right,v);
    }
    return;
}

void pairsum(node *root,int sum){
    vector <int> vec;
    treetovector(root,vec);
    
    int start=0;
    int end=vec.size()-1;
    
    while(start<end){
        if(vec[start]+vec[end]==sum){
            cout<<"pair found";
            return;
        }
        if(vec[start]+vec[end]>sum)
            end--;
        else
            start++;
    }
    cout<<"no pair";
    return;
}

int main(){
    node* root=new node(15);
    root->left=new node(26);
    root->left->left=new node(3);
    root->right=new node(20);
    root->right->left=new node(18);
    root->right->left->left=new node(17);
    root->right->right=new node(5);
    
    pairsum(root,8);
    
    return 0;
}
