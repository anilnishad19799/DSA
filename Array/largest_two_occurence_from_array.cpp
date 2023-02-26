#include<iostream>
using namespace std;


int *largest_two_occurence(int arr[], int n)
{
    int *arr2 = new int[n];
    int *arr3 = new int[n];
    int m=0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        bool flag = false;
        for (int j = i; j < n; j++)
        {
            int arr3_length = sizeof(arr3) / sizeof(int);
            for (int k = 0; k < arr3_length; k++)
            {
                if (arr[i]==arr3[k])
                {
                    flag = true;
                    break;
                }
            }
            
            if (!flag)
            {
                if (arr[i]==arr[j])
                {
                    count+=1;
                }
            }
            else
            {
                count = 1;
                break;
            }
        }

        arr2[i] = count;
        arr3[i] = arr[i];
    }
    return arr2;
}

int main()
{
    int *arr, n;

    cout<<"Enter n : ";
    cin>>n;

    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Value of array : ";
        cin>>arr[i];
    }
    
    int *output = largest_two_occurence(arr, n);
    cout<<"Output : ";
    
    
    for (int i = 0; i < n; i++)
    {
        cout<<"\nvalue after  is : "<<arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"\nvalue is : "<<output[i];
    }
    
    int first=0, second=0, third=0, f = 0, s = 0;

    for (int i = 0; i < n; i++)
    {
        if (output[i]>f)
        {
            third = second;
            second = first;
            first = arr[i];
            f = output[i];
        }
        else if (output[i]>=s && output[i]!=f)
        {
            third = second;
            second = arr[i];
            s = output[i];
        }
        else
        {   
            if (arr[i]!=third)
            {
                third = arr[i];
            }
        }
    }
    
    cout<<"\nLargest number : "<<first;
    cout<<"\nSecond number : "<<second; 

    return 0;
}