#include<iostream>
#include<stdlib.h>
using namespace std;
struct BST
{
    int data;
    struct BST *left;
    struct BST *right;
};
void insert(int,struct BST&);
struct BST *head;
struct BST* newnode(int data)
{
    struct BST *node = (struct BST*) malloc(sizeof(struct BST));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void inorder(struct BST *node)
{
    if(node==NULL)
    {
        return;
    }
    else
    {
        inorder(node->left);
        cout<<node->data<<" ";
        inorder(node->right);
    }
}
void preorder(struct BST *node)
{
    if(node==NULL)
    {
        return;
    }
    else
    {
        preorder(node->left);
        preorder(node->right);
        cout<<node->data<<" ";
    }
}
void postorder(struct BST *node)
{
    if(node==NULL)
    {
        return;
    }
    else
    {
        cout<<node->data<<" ";
        postorder(node->left);
        postorder(node->right);
    }
}
int main()
{
    int n,data;
    cout<<"Enter number of nodes in binary tree:";
    cin>>n;
    head = NULL;
    cout<<"Enter the data:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        insert(data,*head);
        if(head == NULL)
        {
            cout<<"headnull";
        }
        else
        {
            cout<<"headnotnull";
        }
        cout<<"NODE INSERTED\n";
    }
    cout<<"\nINORDER:-\n";
    inorder(head);
    cout<<"\nPREORDER:-\n";
    preorder(head);
    cout<<"\nPOSTORDER:-\n";
    postorder(head);
}
void insert(int data,struct BST &temp)
{
    if(*temp == NULL)
    {
        cout<<"TEMP NULL";
        *temp = newnode(data);
        if(*temp == NULL)
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }
    cout<<*temp->data<<endl;
    if(*temp->data < data)
    {
        insert(data,*temp->right);
        cout<<"back";
    }
    else if(*temp->data > data)
    {
        insert(data,*temp->left);
        cout<<"back";
    }
}
