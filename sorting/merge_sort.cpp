#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;

     while (i<=mid && j <=end)
     {
        if(arr[i]<=arr[j])
        {
            arr2[k] = arr[i];
            i++; 
        }
        else
        {
            arr2[k] = arr[j];
            j++;
        }

        k++;
     }


    // check for remaining element present
     if (i>mid)
     {  
        while(j<=end)
        {
            arr2[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i<=mid)
        {
            arr2[k] = arr[i];
            i++;
            k++;
        }
    }
}

void mergesort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = st - (int)(end - start)/2;
    }
    
    mergesort(arr, start, mid);
    mergesort(arr, mid+1 ,end);
    merge(arr, start, mid, end);
}

int main()
{
    int n;
    cout<<"Enter n ";
    cin>>n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter array value : ";
        cin>>arr[i];
        cout<<endl;
    }

    mergesort(arr 0 ,n)
    
    return 0;
}