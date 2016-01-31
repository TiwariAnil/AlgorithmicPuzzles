#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<iostream>
using namespace std;

long long k=0,p=0;
main()
{
      for(int i=1;i<500;i++)
       {      
             for(int j=i;j<500;j++)
             {      
                     for(int k=j;k<500;k++)
                     {      
                         if(i+j+k==1000 && (i*i)+(j*j)==(k*k))
                         cout<<i*j*k;
                     }
             }
      }
      system("pause"); 
}     
