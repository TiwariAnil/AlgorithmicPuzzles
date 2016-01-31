#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
    int i, x, y, count, max1=0,max2=0;
    long long step ;              // you made mistake here;;;;;;it becoume order of long long
             for(i=1000;i<=1000000;i++)
              {    step=i;count=1;
                   while(step>1)
                   {
                      if(step%2==0)
                         step=step/2;
                      else
                         step=(3*step)+1;
                      count++;
                      if(step==1)
                        break; 
                   }
                   if(count>max1)
                   {
                     
                       max1=count;
                       max2=i;
                   }                              
              }     
              cout<<max1<<endl;
              cout<<max2;     
              system("pause");
}                      
