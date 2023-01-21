#include<iostream>
using namespace std;
void sequence(int);
main()
{
    int num;
    cout<<"Enter the required number: ";
    cin>>num;
    sequence(num);
        
}
void sequence(int num)
{
    int no=1,amplified;
    for(int x=0;x<=num;x++)
    {
        if((no%4)==0)
        {
            amplified=no*10;
            cout<<amplified<<endl;
        }
        else
        cout<<no<<endl;
        no++;
    }
}