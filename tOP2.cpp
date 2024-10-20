#include<iostream>
using namespace std;
void upper(int n);
void lower(int n);
main()
{
    int n;
    cout<<"Enter the desired number of rows: ";
    cin>>n;
    upper(n);
    lower(n);
}

void upper(int n)
{
    int x,y;
    for(x=n/2;x>=1;x--)
    {
        for(y=1;y<=n/2;y++)
     {
        if(y<x)
        cout<<" ";
        else
        cout<<"*";
    }
        cout<<endl;
    }
}

void lower(int n)
{
    int a,b;
    for(a=1;a<=n/2;a++)
    {
        for(b=1;b<=n/2;b++)
        {
            if(b<a)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }
}