#include<iostream>
using namespace std;

int *queue, n, ch, front = -1, rear = -1;

void Enqueue()
{

    if ((front==0 && rear == n-1) || (front==rear+1))
    {
        cout<<"Queue is Empty";
        return;
    }

    int input;
    cout<<"Enter value to eneter in queue : ";
    cin>>input;

    
    if (front ==-1)
    {
        front  = 0;
        rear = 0;
    }
    else 
    {
        if (rear == n-1)
        {
            rear = 0;
        }   
        else{
            rear +=1;
        }     
    }

    cout<<"rear value in enqueue "<<rear<<" front "<<front<<endl;
    queue[rear] = input;
}

void Dequeue()
{
    if (front==-1)
    {
        cout<<"Queue is empty or full"<<endl;
    }

    cout<<"Elelement remove is "<<queue[front]<<endl;    
    
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else 
    {
        if(front==n-1)
        {
            front = 0;
        }
        else
        {
            front+=1;
        }
    }
}

void Printqueue()
{
    if (front==-1)
    {
        cout<<"Queue is empty";
    }

    cout<<"rear"<<rear<<"front"<<front<<endl;
    if(front<rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout<<"Value is "<<queue[i]<<endl;
        }
    }
    else
    {
        while (front<=n-1)
        {
            cout<<queue[front]<<""<<endl;
            front+=1;
        }
        front = 0;

        while (front<=rear)
        {
            cout<<queue[front]<<""<<endl;
            front+=1;
        }
    }
    
}

int main()
{
    cout<<"Enter value of n : ";
    cin>>n;
    queue = new int[n];

    do 
    {
        cout<<"\n";
        cout<<"Enter basic operation\n";
        cout<<"1. Enqueue\n";
        cout<<"2. Dequeue\n";
        cout<<"3. Printqueue\n";
        cout<<"4. Exit\n";

        cout<<"Enter value of choice";
        cin>>ch;
        cout<<"\n";

        // Enqueue(queue, n);
        switch (ch)
        {
            case 1:
                Enqueue();
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Printqueue();
                break;
            case 4:
                cout<<"Exit";
                break;
            default:
                cout<<"Wrong Input Enetred";
                break;;
        }

    }while(ch!=4);


    return 0;
}