#include<iostream>
using namespace std;
main()
{
    int lines;
    cout<<"Enter the number of lines: ";
    cin>>lines;
    for(int x=0;x<=lines;x++)
    {
        for(int y=0;y<=x;y++)
        cout<<"*";
        cout<<endl;
    }
}