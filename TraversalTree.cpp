#include<iostream>
#include<stdlib.h>
using namespace std;
struct BST
{
    int data;
    struct BST *left;
    struct BST *right;
};
struct BST *head;
struct BST* newnode(int data)
{
    struct BST *node = (struct BST*) malloc(sizeof(struct BST));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
struct BST* insert(int data,struct BST *temp)
{
    if(temp == NULL)
    {
        cout<<"TEMP NULL";
        return newnode(data);
    }
    cout<<temp->data<<endl;
    if(temp->data < data)
    {
        insert(data,temp->right);
        cout<<"back";
    }
    else if(temp->data > data)
    {
        insert(data,temp->left);
        cout<<"back";
    }
    return temp;
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
        if(i==0)
        {
            head = insert(data,head);
        }
        else
        {
            insert(data,head);
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
