#include<iostream>
using namespace std;

int sum_of_n_num(int i)
{
    if (i==0)
    {
        return 0;
    }

    return i + sum_of_n_num(i-1);
}

int main()
{
    int n;
    cout<<"Enter n ";
    cin>>n; 

    int sum = sum_of_n_num(n);
    cout<<"Sum of n is "<<sum;
    return 0;
}