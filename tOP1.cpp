#include<iostream>
using namespace std;
void diamond(int n);
main()
{
    int n;
    cout<<"Enter desired number of rows: ";
    cin>>n;
    diamond(n);
}

void diamond(int n)
{
    int x,y;
    for(x=n;x>=1;x--)
    {
        for(y=1;y<=x;y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}