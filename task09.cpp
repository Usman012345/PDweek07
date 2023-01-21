#include<iostream>
using namespace std;
main()
{
    int lines;
    cout<<"Enter the number of lines: ";
    cin>>lines;
    int spaces,stars;
    spaces=2*lines;
    stars=0;
    for(int x=0;x<=lines;x++)
    {
        for(int y=0;y<=x;y++)
        cout<<"*";
        for(int z=spaces;z>=0;z--)
        {
            cout<<" ";
        }
         spaces=spaces-2;
        for(int y=0 ; y<= stars ; y++)
        {
            cout<<"*";
        }
        stars++;
        cout<<endl;
    }    


    }