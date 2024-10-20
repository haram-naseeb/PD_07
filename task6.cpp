#include<iostream>
using namespace std;
long primorial(int n);
bool isprime(int num);
main()
{
    int n,output;
    cout<<"Enter Number: ";
    cin>>n;
    output=primorial(n);
    cout<<output;
}

bool isprime(int num)
{
    int c,d=0;
    for(c=1;c<=num;c++)
    {
        if(num%c==0)
        d++;
    }
    if(d==2)
    return true;
    else
    return false;
}

long primorial(int n)
{   
    long result=1;
    int count=0;
    int num=2;
    while(count < n)
    {
        if(isprime(num))
        {
            result*=num;
            count++;
        }
        num++;
    }
    return result;
}