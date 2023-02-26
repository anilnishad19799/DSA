// program
// Input: arr[] = {10, 4, 3, 50, 23, 90}
// Output: 90, 50, 23

#include<iostream>
using namespace std;

int main()
{
    int n;
    int f = -100000, s = -100000, t = -1000000;
    cout<<"Enter value of n : ";
    cin>>n;

    cout<<"Enter value of array\n";
    int *arr = new int[n];
    for(int i=0; i<n ;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>f)
        {
            t = s;
            s = f;
            f = arr[i];
        }
        else if (arr[i]>s && arr[i]!=f)
        {
            t = s;
            s = arr[i];
        }
        else
        {
            s = arr[i];
        }
    }

    cout<<"largest:"<<f<<"\n second largest: "<<s<<"\n third largest:"<<t;

    return 0;
}