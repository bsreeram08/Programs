#include<iostream>
#include<limits.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int checkBST(struct node*);
int performcheckBST(struct node*,int,int);
struct node * newNode(int N)
{
    struct node * datas = (struct node*) malloc(sizeof(struct node));
    datas->left=NULL;
    datas->right=NULL;
    datas->data=N;
    return (datas);
}
using namespace std;
int main()
{
    struct node *root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->right->right = newNode(3);
    if(checkBST(root))
    {
        cout<<"IS BST";
    }
    else
    {
        cout<<"NOT BST";
    }
    return 0;
}
int checkBST(struct node* root)
{
    return (performcheckBST(root,INT_MIN,INT_MAX));
}
int performcheckBST(struct node *root,int min,int max)
{
    if(root==NULL)
    {
        return 1;
    }
    cout<<root->data<<" min:"<<min<<" max:"<<max<<endl;
    if(root->data<min || root->data>max)
    {
        return 0;
    }
    return (performcheckBST(root->left,min,root->data-1)&&performcheckBST(root->right,root->data+1,max));
}
