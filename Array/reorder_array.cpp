#include<iostream>
using namespace std;


int *reorder(int arr1[], int index[], int n)
{
    int *arr2;
    arr2 = new int[n];
    for (int i = 0; i < n; i++)
    {
        int ind = index[i];
        arr2[ind] = arr1[i];
    }

    return arr2;
}


int main()
{
    int *arr1,*arr2, *index, n;

    cout<<"Enter n : ";
    cin>>n;

    arr1 = new int[n];
    arr2 = new int[n];
    index = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter array value : ";
        cin>>arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter index value : ";
        cin>>index[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"value are : "<<arr1[i]<<"\n";
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"index : "<<index[i]<<"\n";
    }

    int *result = reorder(arr1, index, n);

    for (int i = 0; i < n; i++)
    {
        cout<<"value are : "<<result[i]<<"\n";
    }
    
    return 0;
}