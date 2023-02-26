#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Anter value of n ";
    cin>>n;

    int* arr = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter array value ";
        cin>>arr[i];
        cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<"value is "<<arr[i];
        cout<<endl;
    }


    return 0;
}