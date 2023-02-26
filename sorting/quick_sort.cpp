#include<iostream>
using namespace std;

void swap(int arr[], int start, int end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}

int partition(int arr[], int low , int high)
{
    int pivot = arr[low];
    int start = low;
    int end = high;

    while (start<end)
    {    
        cout<<"Here";
        while (arr[start] <= pivot)
        {
            start++;
        }
        
        while (arr[end] > pivot)
        {
            end--;
        }

        if (start<end)
        {
            // swap array value
            swap(arr, start, end);
        }
    }

    // swap pivot with end value
    swap(arr, low, end);

    return end;
        
}

void quicksort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    
    int part = partition(arr, low, high);

    quicksort(arr, low, part-1);
    quicksort(arr, part+1, high);

}

int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<endl;
    int * arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the value : ";
        cin>>arr[i];
        cout<<endl;
    }

    quicksort(arr, 0 , n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
    
    return 0;
}