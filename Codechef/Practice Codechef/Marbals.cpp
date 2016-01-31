#include<stdlib.h>
#include<iostream>
using namespace std;

//long j=1000000000;
long fact(long f)
{
     if(f==1)
        return 1;
     long temp;   
     temp= f*fact(f-1);
     return temp;
}        

/*long comb(long a, long b)
{
     return ((fact(a))/(fact(a-b)*fact(b)));
}      
*/    
main()
{
      int test;
      long p,q,a,b,c;
      
      scanf("%d",& test);
      while(test--)
      {
               scanf("%ld",& p);
               scanf("%ld",& q);  
               a=fact(a);
               b=fact((a-b));
               c=fact(b);
               printf("%ld\n",a/(b*c));
           
      }
      system("pause"); 
}                    
