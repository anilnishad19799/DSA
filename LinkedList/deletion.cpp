#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* link;
};
Node* head = NULL;

void insert_at_end()
{
    Node* temp = new Node;
    cout<<"Enter value to enter : ";
    cin>>temp->data;
    temp->link = NULL;
    
    if (head==NULL)
    {
        head = temp;
        return;
    }

    Node* ptr = head;

    while(ptr->link!=NULL)
    {
        cout<<"Ptr"<<ptr;
        ptr = ptr->link;
    }
    ptr->link = temp;
    return;
}

void insert_at_front()
{
    Node* temp = new Node;
    cout<<"Enter value to enter : ";
    cin>>temp->data;
    temp->link = NULL;

    if (head==NULL)
    {
        head = temp;
        return;
    }
    else
    {
        temp->link = head;
        head = temp;
        return;
    }
}

void insert_at_middle()
{
    int loc;
    Node* temp = new Node;
    cout<<"Enter value to enter : ";
    cin>>temp->data;
    temp->link = NULL;

    cout<<"Enter location to push value ";
    cin>>loc;

    if (head==NULL)
    {
        head = temp;
        return;
    }
    else
    {
        cout<<"Come Here"<<endl;
        Node *ptr = new Node;
        ptr = head;
        int i = 0;
        while (i<loc-1)
        {
            i+=1;
            ptr = ptr->link;
        }

        temp->link = ptr->link;
        ptr->link = temp;
        return;
    }
}

void pop()
{
    // ## pop
    if (head==NULL)
    {
        cout<<"Nothing to delete list is empty"<<endl;
        return;
    }

    Node *ptr = new Node;
    ptr = head;

    while(ptr->link->link!=NULL)
    {
        ptr = ptr->link;
    }

    cout<<"Deleted element is "<<ptr->link->data<<endl;
    ptr->link = NULL;  
}

void delete_at_index()
{
    int loc;
    cout<<"Enter location to delete data ";
    cin>>loc;

    if (head==NULL)
    {
        cout<<"List is empty";
        return;
    }
    
    Node *ptr = new Node;
    ptr = head;
    int i=0;
    if(loc==0)
    {
        Node *temp = new Node;
        temp = ptr;
        ptr = ptr->link;
        temp->link = NULL;
        head = ptr;

        cout<<"deleted element at index "<<i<<" is "<<temp->data;
        return;
    }
    else
    {
        while (i<loc-1)
        {
            ptr = ptr->link;
            i+=1;
        }
        
        Node *temp = new Node;
        temp = ptr->link;
        ptr->link = ptr->link->link;
        temp->link = NULL;

        cout<<"deleted element at index "<<i<<" is "<<temp->data;
    }
}

void Display()
{
    if (head==NULL)
    {
        cout<<"List is empty";
        return;
    }

    Node* ptr = head;
    while (ptr!=NULL)
    {
        cout<<"Value present are "<<ptr->data<<endl;
        ptr = ptr->link;
    }
    return;
}

int main()
{
    int ch;
    do 
    {
        cout<<"1. Insert at front"<<endl;
        cout<<"2. Insert at middle"<<endl;
        cout<<"3. Insert at end"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. pop"<<endl;
        cout<<"6. delete_at_index"<<endl;
        cout<<"6. exit"<<endl;

        cout<<"Enter choice to do ";
        cin>>ch;

        if (ch==1)
        {
            insert_at_front();
        }
        else if(ch==2)
        {
            insert_at_middle();
        }
        else if(ch==3)
        {
            insert_at_end();
        }
        else if (ch==4)
        {
            Display();
        }
        else if (ch==5)
        {
            pop();
        }
        else if (ch==6)
        {
            delete_at_index();
        }
        else if (ch==6)
        {
            cout<<"Exit"<<endl;
            break;
        }
        else
        {
            cout<<"please input valid option"<<endl;
        }
    } while(ch!=7);


    return 0;
}