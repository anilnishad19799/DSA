#include<iostream>
using namespace std;


void sorting(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(arr[i]>arr[j])
            {
                cout<<"arr[i]"<<i<<arr[i]<<endl;
                cout<<"arr[j]"<<j<<arr[j]<<endl;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        cout<<"arr[i]*****************"<<i<<arr[i]<<endl;
    }

    cout<<"fina array after sorting is :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}

int main()
{
    int n;

    cout<<"Enter n :";
    cin>>n;

    int *arr = new int[n];
    
    cout<<"Enter value of array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    sorting(arr, n);
    return 0;
}