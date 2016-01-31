#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<iostream>
using namespace std;
unsigned long long sum=0;
main()
{
      int count=0;
      for(int i=1;i<15000;i++)
       {      
              sum=sum+i;// 76576500......a weird hit nd trial leads the way!!
          if(sum > 76000000 && sum < 77576500)    
          {    
                   for(int j=1;j<=sqrt(sum);j++)//j<=sum/2;j++)//
             {      
                    if(sum%j==0)
                    count+=2;
                   
                   if(count==502)
                   {
                       cout<<sum<<endl; break; }  
                       //count=0; 
                   }
                  
           }
           //if(count>480)
             //cout<<"i="<<i<<"\nsum="<<sum<<"\ncount="<<count<<endl;
           if(count==502)
                break;
             count=0;
            
         
      }
      system("pause"); 
}     
