#include<iostream>
using namespace std;
main()
{
    int lines;
    cout<<"Enter the number of lines: ";
    cin>>lines;
    int spaces = lines;
    int stars = 0;
    for(int x= lines ; x >= 0 ; x--)
    {
        for(int z= spaces ; z >= 0 ; z--)
        {
            cout<<" ";
        }
        spaces--;
        for(int y=stars ; y>= 0 ; y--)
        {
            cout<<"*";
        }
        stars++;
        cout<<endl;
    }
    spaces=0;
    stars=lines;

    for(int x= lines ; x >= 0 ; x--)
    {
        for(int z= 0 ; z <= spaces ; z++)
        {
            cout<<" ";
        }
        spaces++;
        for(int y=0 ; y<= stars ; y++)
        {
            cout<<"*";
        }
        stars--;
        cout<<endl;
    }
    }
