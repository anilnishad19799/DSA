#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int x)
{
    for(int i=0; i<n ;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }

    return -1;

}

int main()
{
    int n, search_val;
    cout<<"Enter value of n ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter value of array ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter value to be search ";
    cin>>search_val;

    int index = linear_search(arr, n, search_val);
    if(index!=-1)
    {
        cout<<"Index at which value found is "<<index;
    }
    else
    {
        cout<<"Element Not found";
    }
    return 0;
}