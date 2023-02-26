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
        cout<<"5. exit"<<endl;

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
            cout<<"Exit"<<endl;
            break;
        }
        else
        {
            cout<<"please input valid option"<<endl;
        }
    } while(ch!=5);


    return 0;
}