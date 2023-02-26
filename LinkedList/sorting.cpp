#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* link;
};
Node* head = NULL;

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

void sorting()
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
        if (head->data < temp->data)
        {
            Node* ptr = head;

            while (ptr->link!=NULL)
            {
                cout<<"head->data  "<<head->data<<endl;
                cout<<"ptr->data "<<ptr->data<<endl;
                cout<<"ptr->link  "<<ptr->link<<endl;
                cout<<"ptr->link->data "<<ptr->link->data<<endl;
                cout<<"ptr->link->link "<<ptr->link->link<<endl;
                if (ptr->link->link==NULL)
                {
                    if (temp->data < ptr->link->data)
                    {
                        cout<<"temp";
                        break;
                    }
                    else
                    {
                        cout<<"Here"<<endl;
                        ptr = ptr->link;
                        break;
                    }
                }

                if (temp->data > ptr->data && temp->data > ptr->link->data )
                {
                    cout<<"Here if "<<endl;
                    ptr = ptr->link;
                    // break;
                }
                else
                {
                    cout<<"Here if else"<<endl;
                    break;
                }
                
                
            }
            temp->link = ptr->link;
            ptr->link = temp;
        }
        else
        {
            Node* ptr = head;
            temp->link = ptr;
            ptr = temp;
            head = temp;
        }
        
    }
    
}


int main()
{
    int ch;
    do 
    {
        cout<<"1. Display"<<endl;
        cout<<"2. Sorting"<<endl;
        cout<<"3. Exit"<<endl;

        cout<<"Enter choice to do ";
        cin>>ch;

        if(ch==1)
        {
            Display();
        }
        else if (ch==2)
        {
            sorting();
        }
        else if (ch==3)
        {
            cout<<"Exit";
            break;
        }
        else
        {
            cout<<"Wrong Input"<<endl;
        }
        
    }
    while (ch!=3);

    return 0;
}