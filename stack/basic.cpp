#include<iostream>
using namespace std;

int top = -1;

int push(int stack[], int n)
{
    int x;

    if (top>n-1)
    {
        cout<<"Stack is full ";
    }
    {
        cout<<"Enter value : ";
        cin>>x;
        top = top + 1;
        stack[top]=x;
    }

    return -1;
}

int pop(int stack[], int n)
{
    if (top==-1)
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"Remove element from stack is : "<<stack[top];
        top = top - 1;
    }

    return -1;
}

int peep(int stack[], int n)
{
    if (top>0)
    {    
        for (int i = 0; i < n; i++)
        {
            cout<<"Element are : "<<stack[i];
        }
    }
    return -1;
}


int main()
{
    int *stack, n, ch, q;

    cout<<"Enter n : ";
    cin>>n;

    stack = new int[n];

    cout<<"Performing Stack Operation.\n";


    do  
    {
        cout<<"1.PUSH\n";
        cout<<"2.POP\n";
        cout<<"3.PEEP\n";

        cout<<"Enter choice : ";
        cin>>ch;

        if (ch==1)
        {
            push(stack, n);
        }
        else if (ch == 2)
        {
            pop(stack, n);
        }
        else if (ch==3)
        {
            peep(stack ,n);
        }
        else
        {
            cout<<"\nWrong Option";
        }

        cout<<"\nEnter value of q : ";
        cin>>q;
    }while(q!=5);
    
     

    return 0;
}