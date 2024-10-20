#include<iostream>
#include<string.h>
using namespace std;
string patients(int day);
main()
{
    int day;
    string output;
    cout<<"Number of days you visited hospital: ";
    cin>>day;
    output=patients(day);
    cout<<output;
}

string patients(int day)
{   
    int x,treated=0,untreated=0,doctors=7;
    string result;
    for(x=1;x<=day;x++)
    {
      int total_patients;
      cout<<"Number of patients who visited hospital on Day "<<x<<" : ";
      cin>>total_patients;

      if(x%3==0 && x!=0)
      {
        if(untreated>treated)
        {
          doctors++;
        }
      }

      if(total_patients<doctors)
      {
        treated+=total_patients;
      }

      else
      {
        treated+=doctors;
        untreated+=total_patients-doctors;
      }
    }
    result="treated patients: "+to_string(treated)+"\nuntreated patients: "+to_string(untreated);
    return result;
}