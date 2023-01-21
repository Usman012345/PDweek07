#include<iostream>
using namespace std;
void percentage(int,float);
void printprecentage();
float no;
main()
{
    int number;
    cout<<"Enter the required  number: ";
    cin>>number;
    no=number;
    cout<<no;
    for(int x=0;x<no;x++)
    {
        cout<<"Enter a number: ";
        cin>>number;
        percentage(number,no);
    }
    printprecentage();
}
float a=0.00,b=0.00,c=0.00;
    float p1=0.00,p2=0.00,p3=0.00;
void percentage(int number,float no)
{
    if(number%2==0)
    {
        a++;
    }
    if(number%3==0)
    b++;
    if(number%4==0)
    c++;
    p1=(a/no)*100.00;
    p2=(b/no)*100.00;
    p3=(c/no)*100.00;
}
void printprecentage()
{
    p1=(a/no)*100.00;
    p2=(b/no)*100.00;
    p3=(c/no)*100.00;
    cout<<"p1= "<<p1;
    cout<<"p2= "<< p2; 
    cout<<"p3= "<<p3;
}