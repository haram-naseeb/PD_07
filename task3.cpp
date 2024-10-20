#include<iostream>
using namespace std;
void amplified(int m);
main()
{
    int m;
    cout<<"Enter the number to amplify: ";
    cin>>m;
    amplified(m);
}

void amplified(int m)
{
    int n;
    for(n=1;n<=m;n++)
    {
        if(n%4==0)
        cout<<n*10<<",";
        else 
        cout<<n<<",";
    }
}