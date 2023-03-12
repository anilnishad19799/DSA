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

int height(BSTNode* root)
{
    if (root==NULL)
    {
        return -1
    }
    l_hei = height_of_tree(root->left)
    r_hei = height_of_tree(root->right)

    return max(l_hei, r_hei) + 1
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

    int hei = height(root);
    cout<<"height value "<<hei;
    return 0;
}