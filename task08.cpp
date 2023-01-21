#include<iostream>
using namespace std;
float percentage(int weight);
void price();
float a=0.00,b=0.00,c=0.00;
float p1=0.00,p2=0.00,p3=0.00;
float count=0.00;
float total_weight=0;
main()
{
    int weight;
    cout<<"Enter the count of cargo: ";
    cin>>count;
    for(int x=1;x<=count;x++)
    {
        cout<<"Enter the weightage of cargo:";
        cin>>weight;
        percentage(weight);
        total_weight=total_weight+weight;
    }
    price();

}
float percentage(int weight)
{
    if(weight<=3)
    {
        a=a+weight;
    }    
    if(weight<=11 && weight>3)
    {
        b=b+weight;
    }
    if(weight>11)
    {
        c=c+weight;
    }
}
void price()
{
     p1=(a/total_weight)*100.00;
    p2=(b/total_weight)*100.00;
    p3=(c/total_weight)*100.00;
    float cost=(a*200)+(b*175)+(c*120);
    float average=cost/total_weight;
    cout<<"The average cost is "<<average<<endl;
    cout<<"ON minibus p1: "<<p1<<endl;
    cout<<"ON truck p2: "<<p2<<endl;
    cout<<"ON train p3: "<<p3<<endl;   
}