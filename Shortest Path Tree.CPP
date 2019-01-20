#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *left,*right;
};
struct node* newnode(int data)
{
    struct node *newnodedata = new node;
    newnodedata->data=data;
    newnodedata->left=NULL;
    newnodedata->right=NULL;
    return newnodedata;
};
int countsums=0;
void findpath(struct node *head,int actualsum,int prevsum)
{
    int sum=prevsum+head->data;
    if(sum==actualsum)
    {
        countsums++;
        return;
    }
    else
    {
        if(head->left!=NULL)
        findpath(head->left,actualsum,sum);
        if(head->right!=NULL)
        findpath(head->right,actualsum,sum);
    }
}
struct node *root=NULL;
int main()
{
    root=newnode(1);
    root->left = newnode(10);
    root->right = newnode(15);
    root->left->left = newnode(5);
    root->left->right = newnode(2);    int sum=16;
    findpath(root,sum,0);
    cout<<countsums;
    return 0;
}
