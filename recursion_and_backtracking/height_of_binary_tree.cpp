#include <iostream>
using namespace std;
struct tree
{
    int data;
    tree* left;
    tree* right;
};
tree* root;
tree* GetNewNode(int data)
{
    tree* newnode = new tree();
    newnode->data =data;
    newnode->left=newnode->right = NULL;
    return newnode;
}
tree* insert(tree* root,int data)
{
    if (root == NULL)
        root=GetNewNode(data);
    else if(data<= root->data)
        root->left=insert(root->left,data);
    else
        root->right=insert(root->right,data);
    return root;
}
int height(tree* root)
{
    if (root == NULL)
        return 0;
    int ln=height (root->left);
    int rn=height (root->right);
    return 1+ max(ln,rn);
}
int main(){
    tree* root = NULL;
    insert(root,15);
    insert(root,10);
    insert(root,39);
    height(root);
    
    return 0;
}