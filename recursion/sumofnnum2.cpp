#include<iostream>
using namespace std;

int sum_of_n_num(int i, int sum)
{
    if (i>=6)
    {
        cout<<"sum of n is "<<sum;
        return 5;
    }
    sum_of_n_num(i+1, sum+i);
}

int main()
{
    int n;
    cout<<"Enter n ";
    cin>>n;
    sum_of_n_num(0, n);
    return 0;
}