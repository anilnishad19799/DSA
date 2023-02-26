#include<iostream>
using namespace std;

void printn(int n)
{
    if (n==0)
    {
        return;
    }
    
    cout<<"Value is "<<n<<endl;
    printn(n-1);
}

int main()
{
    int n;

    cout<<"Enter n: ";
    cin>>n;

    printn(n);
    return 0;
}