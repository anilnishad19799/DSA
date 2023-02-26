#include<iostream>
using namespace std;

int smallest_missing(int arr[], int n , int m)
{
    int i;
    for (int i = 0; i < m; i++)
    {
        if (arr[i]==i)
        {
            continue;
        }
        else
        {
            return i;
            break;
        }
    }
    return i; 
}

int main()
{
    int *arr, n, m;

    cout<<"Enter value of n : ";
    cin>>n;

    cout<<"Enter value of m : ";
    cin>>m;

    arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter value : ";
        cin>>arr[i];
    }

    if (m>n)
    {
        int number = smallest_missing(arr, n ,m);
        cout<<"Smallest missing number is "<<number;
    }
    else
    {
        cout<<"m value is smaller than n";
    }
    

    return 0;
}