#include <iostream>
using namespace std;
struct node
{
    int data;
    node * next;
};
struct node* he= NULL;
void printLL()
{
    node * temp=he;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
void insert (int data)
{
    node* temp= new node();
    temp->data=data;
    temp->next=NULL;
    node *p=he;
    if (he==NULL)
    {
         he=temp;
         return;
    }
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
}
int main()
{
    int n;
    cout<<"how many elements are to be stored ?"<<"\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter an element";
        int x;
        cin>>x;
        insert(x);
    }
    printLL();
    return 0;
}