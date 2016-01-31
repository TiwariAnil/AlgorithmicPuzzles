#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    long x,p,max=0;
    int i,j,a[6];
    
    for(i=100;i<=999;i++)
      {  for(j=100;j<=999;j++)
            {  p=i*j;//cout<<"\n"<<i;
              x=p;
              a[5]=x%10;
              x/=10;
              a[4]=x%10;
              x/=10;
              a[3]=x%10;
              x/=10;
              a[2]=x%10;
              x/=10;
              a[1]=x%10;
              x/=10;
              a[0]=x%10;
              
             
              if(a[0]==a[5])
                    if(a[1]==a[4])
                         if(a[2]==a[3])
                                 if(max<p)
                                      max=p;
            }    
      }                                  
                                         
                   cout<<max;
                   getch();
                   return 0;
 }                                               
