#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int key,j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int n;

    cout<<"Enter value of n ";
    cin>>n;

    int* arr = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter array value ";
        cin>>arr[i];
        cout<<endl;
    }
    
    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<"sorting array value "<<arr[i]<<endl;
    }
    
    return 0;
}