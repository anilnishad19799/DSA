#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* link;
};



int main()
{
    struct node* head = NULL;
    cout<<"Simple implement linked list"<<endl;
    // node temp = (struct node*)malloc(sizeof(struct node))
    struct node* temp = new node;

    temp->data = 5;
    temp->link = head;

    cout<<"Value of temp "<<temp->data<<endl;
    cout<<"Address of temp "<<temp<<endl;
    cout<<"value of head "<<head;


    return 0;
}