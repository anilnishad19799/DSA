#include<iostream>
using namespace std;
#include<string.h>

int palindrome(char* name, int i,  int n)
{
    if (i>n)
    {
        return 1;
    }

    if (name[i]!=name[n])
    {
        return 0;
    }
    
    palindrome(name, i+1, n-1);
}

int main()
{
    char name[] = "lallal";

    int string_size = sizeof(name) / sizeof(char);
    cout<<"Name is "<<name<<endl;
    cout<<"len is "<<string_size<<endl;

    int val = palindrome(name, 0,  string_size - 2);

    if (val==0)
    {
        cout<<"String is not palindrome";
    }
    else
    {
        cout<<"String is palindrome";
    }
    
    return 0;
}