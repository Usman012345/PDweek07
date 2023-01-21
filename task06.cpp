#include<iostream>
using namespace std;
main()
{
    int treated,untreated,doctors=7;
    int days,patients;
    cout<<"Enter the number of days: ";
    cin>>days;
    cout<<"Enter the number of patients: ";
    cin>>patients;
    for(int x=0;x<=days;x++)
    {
      untreated=patients-doctors;
        treated=patients-untreated;
     if(patients<doctors)
     {
        cout<<"All patients are treated: "<<patients <<" and 0 returned";
     }
     else 
     {
        cout<<(patients-doctors)<<" is the number of untreated patients and "<<(patients-(patients-doctors) )<<" are the treated patients";

     }
     if(treated>untreated)
     return 0;
     if(x/3==0 && untreated>treated)
     {
        cout<<"By this time we have"<<untreated<<" untreated patients and "<<treated<<" treated patients";
        doctors++;
     }
    }
}