#include<iostream>
using namespace std;

int main()
{
    int rows,cols;

    cout<<"Enter rows value = ";
    cin>>rows;

    cout<<"\nEnter cols value = ";
    cin>>cols;
    

    int **arr = new int*[rows];

    for(int i = 0; i<rows; i++)
    {
        arr[i] = new int[cols];
    }

    cout<<"\nEnter the array value\n";
    for(int i = 0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<"\nthe value at ["<<i<<"]["<<j<<"] index is = "<<arr[i][j];
        }
    }
    return 0;
}