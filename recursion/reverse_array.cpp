#include<iostream>
using namespace std;

void reverse_array(int arr[], int n)
{
    if (n<0)
    {
        return;
    }
    cout<<arr[n];

    reverse_array(arr, n-1);
}

int main()
{
    int n;
    int* arr;
    cout<<"Enter n ";
    cin>>n;

    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter array value ";
        cin>>arr[i];
    }

    reverse_array(arr, n-1);
    
    return 0;
}