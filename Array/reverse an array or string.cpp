#include<iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int a = n;

    for (int i = 0; i < n; i++)
    {
        if (i>n)
        {
            break;
        }

        int temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;
        n--;
    }

    for (int i = 0; i <= a; i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int n = 5;
    int *arr = new int(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    reverseArray(arr, n-1);

    return 0;
}