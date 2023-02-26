#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n<1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

int main()
{
    int n;

    cout<<"Enter n : ";
    cin>>n;

    int number = factorial(n);

    cout<<"Factorial number of n is : "<<number;

    return 0;
}