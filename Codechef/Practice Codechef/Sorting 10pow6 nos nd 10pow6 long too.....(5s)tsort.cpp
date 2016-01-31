
#include<stdio.h>

long a[10000000];
int main()
{
    long test=0,i,j,p;
    scanf("%ld",& test);
       
    for(i=0;i<test;i++)
    {

        scanf("%ld",& p);
      //  printf("%ld",a[p]); 
        a[p]++;
       // printf("%ld",a[p]);
    }
    
  
    for(i=0;i<=1000000;i++)
    {
        for(j=1;j<=a[i];j++)
            printf("%ld\n",i);
            
    }
    
     return 0;
}       
