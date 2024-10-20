#include<iostream>
using namespace std;
bool isprime(int n);
main()
{
    int n,result;
    cout<<"Enter number: ";
    cin>>n;
    result=isprime(n);
    cout<<result;
}

bool isprime(int n)
{
    int c,d=0;
    for(c=1;c<=n;c++)
    {
        if(n%c==0)
        d++;
    }
    if(d==2)
    return true;
    else
    return false;
}