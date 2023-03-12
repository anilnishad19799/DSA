#include<iostream>
using namespace std;

struct BSTNode
{
    int data;
    BSTNode* left;
    BSTNode* right;
};

BSTNode* root;

BSTNode* GetNewNode(int data)
{   
    BSTNode *temp = new BSTNode;  
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
};


BSTNode* insert(BSTNode* root, int data)
{
    if (root==NULL)
    {
        root = GetNewNode(data);
        return root;
    }

    if (data<=root->data) 
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }

    return root;
}

void inorder(BSTNode* root)
{
    if (root==NULL)
    {
        return ;
    }
        inorder(root->left);
        cout<<"data"<<root->data<<endl;
        inorder(root->right);
}

void preorder(BSTNode* root)
{
    if (root==NULL)
    {
        return;
    }
    cout<<"Data"<<root->data<<endl;
    preorder(root->left);
    preorder(root->right)
}

void postorder(BSTNode* root)
{
    if (root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right)
    cout<<"Data"<<root->data<<endl;
}



int main()
{
    root=NULL;
    cout<<"Implement Binary Tree"<<endl;
    int n;
    cout<<"Enter n value to be enter in tree ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cout<<"Enter data in new node ";
        cin>>data;
        root = insert(root, data);
        cout<<endl;
        cout<<"root data "<<root->data<<endl;
        cout<<endl;
    }

    inorder(root);
    preorder(root);
    postorder(root);
    return 0;
}