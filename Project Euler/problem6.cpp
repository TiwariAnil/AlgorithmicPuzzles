#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<iostream>
using namespace std;

long long k=0,p=0;
main()
{
      for(int i=1;i<101;i++)
       {      k+=(i*i);
             p+=i; 
      }
      p=p*p;
      k=p-k;     
                cout<<k;
      system("pause"); 
}     
