#include<iostream>
#include<queue>
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

int BFS(BSTNode* root)
{
    if (root==NULL)
    {
        return 0;
    }

    queue<BSTNode*> q;

    q.push(root);

    while (!q.empty())
    {
        BSTNode* curr = q.front();

        cout<<"data"<<curr->data;
        if (curr->left!=NULL)
        {
            q.push(curr->left);
        }
        
        if (curr->right!=NULL)
        {
            q.push(curr->right);
        }

        q.pop();

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

    BFS(root);

    return 0;
}