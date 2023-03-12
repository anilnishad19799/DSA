#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left = NULL;
    Node* right = NULL;
};

Node* root = NULL;


Node* createNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
} 

Node* createTree()
{

    int data;
    cout<<endl;
    cout<<"Enter data : ";
    cin>>data;

    if (data==-1) return NULL;

    root = createNode(data);

    cout<<"root->data"<<root->data;

    cout<<"Enter data into left Node : ";
    root->left = createTree();
    
    cout<<"Enter data into right Node : ";
    root->right = createTree();

    cout<<"final return root->data"<<root->data;
    return root;
}

void preorder(Node* root)
{
    if (root==NULL)
    {
        return;
    }
    
    cout<<"Data is "<<root->data;
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    cout<<"Iplement binary tree "<<endl;
    root = createTree();
    preorder(root);    
    return 0;
}
