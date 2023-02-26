#include<iostream>
using namespace std;

struct BSTNode
{
    int data;
    BSTNode *left;
    BSTNode *right;
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


bool search(BSTNode * root, int data)
{
    if (root==NULL)
    {
        return false;
    }
    else if (root->data==data)
    {
        return true;
    }
    else if (data<=root->data)
    {
        search(root->left, data);
    }
    else
    {
        search(root->right, data);
    }
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
        cout<<"root data "<<root->data;
        cout<<endl;
    }

    int search_data;
    cout<<"Enter data to be search from tree";
    cin>>search_data;
    bool out = search(root , search_data);
    if (out)
    {
        cout<<"data found in tree";
    }
    else
    {
        cout<<"Data not found in tree";
    }
    

    return 0;
}