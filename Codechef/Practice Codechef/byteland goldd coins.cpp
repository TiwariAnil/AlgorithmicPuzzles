#include<stdio.h>
#include<iostream>
using namespace std;
//#include<stdlib.h>
long solve(int n)
{
    long p;
    if(n<12)
       return n;
    
     p=solve(n>>1)+solve(n/3)+solve(n>>2);
    
        if(n<=p)
           n=p;
       return  n;
  
}    

main()
{
      int x;
      while(scanf("%d",&x)!=EOF)
      {
          
            printf("%ld\n",solve(x));
            
      }
    //  system("pause");
}           
             
