#include<iostream.h>
#include<conio.h>
float cube(float)
int main()
{    clrscr();
     float num;
     cout<< "Enter a number;" ;
     cin>> num;
     cout<< "\n"<<num<< "is"
         <<cube(num) << "\n" ;
     return 0;
     }
     float cube(float a)
     { 
     return a*a*a;
     }    
