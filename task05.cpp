#include<iostream>
using namespace std;
int sequence(int);
main()
{
    int x,y;
    cout<<"Enter the reqiured number of lines: ";
    cin>>x;
    y=sequence(x);
    cout<<"The number of dots is "<<y;
    
}
int sequence(int x)
{
    int a,y=0;
    for(int z=1;z<=x;z++)
    {
        y=y+z;

    }
    return y;
    
}