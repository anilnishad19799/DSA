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

int min_from_BST(BSTNode* root)
{
    if (root==NULL)
    {
        return 0;
    }
    
    if (root->left==NULL)
    {
        return root->data;
    }

    min_from_BST(root->left);
    
    
}

int max_from_BST(BSTNode* root)
{
    if (root==NULL)
    {
        return 0;
    }
    
    if (root->right==NULL)
    {
        return root->data;
    }

    max_from_BST(root->right);
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

    int min_val = min_from_BST(root);
    int max_val = max_from_BST(root);
    cout<<"min value "<<min_val<<endl;
    cout<<"max value "<<max_val;
    return 0;
}