#include<iostream>
using namespace std;

int *queue, n, ch, front = 0, rear = -1;

void Enqueue()
{
    if (front ==-1)
    {
        front  = 0;
    }

    if (rear==n)
    {
        cout<<"Queue is Full";
        return;
    }
    else
    {
        int input;
        cout<<"Enter value to eneter in queue : ";
        cin>>input;
        rear+=1;
        queue[rear] = input;
    }
}

void Dequeue()
{
    if (front==-1  || front==rear)
    {
        cout<<"Queue is empty or at last position or not more elemnent present"<<endl;
    }
    
    cout<<"Elelement remove is "<<queue[front]<<endl;    
    front++;
}

void Printqueue()
{
    if (front==-1)
    {
        cout<<"Queue is empty";
    }

    for (int i = front; i <= rear; i++)
    {
        cout<<"Value is "<<queue[i]<<endl;
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