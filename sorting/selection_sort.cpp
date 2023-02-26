#include<iostream>
using namespace std;

void swap(int arr[], int i , int j)
{
    int temp1 = arr[i];
    arr[i] = arr[j];
    arr[j] = temp1;
}

int main()
{
    int n;
    int* arr = new int[n];

    cout<<"Enter n value ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter array value ";
        cin>>arr[i];
    }

    // implement selection

    for (int i = 0; i < n; i++)
    {
        int temp = i;

        for (int j = 0; j < n; j++)
        {
            if (arr[j]>arr[temp])
            {
                temp = j;
            }
            swap(arr,i,temp);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
        
    

    return 0;
}