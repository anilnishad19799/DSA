// Input: arr[] = {3, 5, 4, 1, 9}
// Output: Minimum element is: 1
//               Maximum element is: 9

// Input: arr[] = {22, 14, 8, 17, 35, 3}
// Output:  Minimum element is: 3
//               Maximum element is: 35

#include<iostream>
using namespace std;

int minMax(int arr[], int n)
{
    int min = 100000;
    int max = -100000;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout<<"min"<<min<<"max"<<max;
    return 0;

}


int main()
{
    int n;
    cout<<"Enter the total array to be fiiled";
    cin>>n;

    int *arr = new int(n);

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arrayy element";
        cin>>arr[i];
    }

    int val = minMax(arr, n);
    return 0;
}
