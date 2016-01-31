// function overloading
#include<conio.h>
#include<iostream>

using namespace std;

float vol(float a, float b,float c)
{
      float v;
      v=a*b*c;
      return v;
}

float vol(float r)
{
          float v;
          v=3.14*4*r*r*r/3;
          return v;
}      
main ()
{
     int choice;
     float f,a,b,c;
     cout<<"enter your choice 1.circle .......or 2.cuboid \n";
     cin>>choice;
     if(choice==1)
     {    cout<<"enter radius...........";
         cin>>a;
         f=vol(a);
         cout<<"\nVolume is ......"<<f;
     }
     else if(choice==2)
     {    cout<<"enter 3 sides...........";
         cin>>a>>b>>c;
         f=vol(a,b,c);
         cout<<"\nVolume is ......"<<f;
     }   
     else
          cout<<"Chasma du kya??  dhyan se type kar.........";
          
    getch();      
}          
