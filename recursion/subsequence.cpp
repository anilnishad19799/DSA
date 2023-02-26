#include<iostream>
using namespace std;
int *arr = new int[3]; 
int n =3;

void subsequence(int ind, int *a)
{
    if (ind >= n)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
        
        return;
    }

    a[ind] = arr[ind];
    subsequence(ind+1, a);
    a[ind] = 0;
    subsequence(ind+1, a);

    
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        cout<<"arr value ";
        cin>>arr[i];
    }
    
    int *a = new int[3];
    subsequence(0, a);    
    return 0;
}