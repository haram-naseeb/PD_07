#include<iostream>
#include<iomanip>
using namespace std;
float average(int cargo);
main()
{
    int cargo;
    float result;
    cout<<"Enter the count of cargo for transportation: ";
    cin>>cargo;
    result=average(cargo);
    cout<<result;
}

float average(int cargo)
{
    int tonnage,total=0;
    float minibus,train,truck;
    float USD,usd1,usd2,usd3;
    for(int x=1;x<=cargo;x++)
    {
        cout<<"Enter the tonnage of cargo "<<x<<" : ";
        cin>>tonnage;
        total=total+tonnage;
        if (tonnage <= 3) 
        {
        minibus += tonnage;
        } 
        else if (tonnage>3 && tonnage <= 11) 
        {
        truck+=tonnage;
        } 
        else if(tonnage>11)
        {
        train+=tonnage;
        }
        usd1=minibus/total*100;
        usd2=truck/total*100;
        usd3=train/total*100;
        USD=((usd1*200)+(usd2*175)+(usd3*120))/100;
    }
    cout<<fixed<<setprecision(2)<<USD<<"%"<<endl<<fixed<<setprecision(2)<<usd1<<"%"<<endl<<fixed<<setprecision(2)<<usd2<<"%"<<endl<<fixed<<setprecision(2)<<usd3<<"%"<<endl;
    return 0;
}