//#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
long long k=1000000000;
bool a[10000000];

bool isPrime(int n)
{
	if( n < 2 )
		return false;	
	if(n==2||n==3||n==5||n==7)
	      return true;
    if(n%2==0 || n%3==0 || n%5==0 || n%7==0 )
    		return false;
    
    //for(int i = 2; i <=7; i++)
 //	if(n%i==0)//	if( ( ( int) n / i ) * i  == n )
	
	return true;
}

main()
{
      long p,q;
      int test;
      
      for(long i=100000000;i<=k;i++)
            a[i]=isPrime(i);
       cin>>test;    
      while(test--)
      {
         scanf("%ld", & p);
         scanf("%ld", & q); 
     
        for(long i = p ; i <= q; i++)
	     {
         if(a[i])
	          printf("1 ,");
	     else
              printf("0 ,");  
         if(i%30==0)
            printf("\n"); 
            }       
	          
	     cout<<endl;       
      }
    // system("pause");
}                    













