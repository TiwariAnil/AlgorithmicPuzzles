
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<iostream>
using namespace std;

//long long k=0,p=0;
unsigned long long sum=1;
main()
{
    //  int sum=1,count=0;
      for(int i=1;i<500;i++)
       {      
              sum=sum*i;
           /*  for(int j=1;j<i/2;j++)
             {      
                    if(sum%j==0)
                      count++;
                   
            }
             if(count==501)
            { cout<<sum<<endl; break; }  
            
             count=0;*/ 
      }
      cout<<sum;
      system("pause"); 
}     
