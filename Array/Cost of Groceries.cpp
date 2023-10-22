#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;

    while (testcase--)
    {
        int no_of_item, minfreshnessvalue;
        vector<int> freshnessvalue(no_of_item);
        vector<int> costofitem(no_of_item);

        for (int i = 0; i < no_of_item; i++)
        {
            cin>>freshnessvalue[i];
        }

        for (int i = 0; i < no_of_item; i++)
        {
            cin>>costofitem[i];
        }

        int sum=0;
        for (int i = 0; i < no_of_item; i++)
        {
            if (freshnessvalue[i]>=minfreshnessvalue)
            {
                sum+=freshnessvalue[i];
            }
        }
        
        cout<<sum<<endl;
        
    }
}