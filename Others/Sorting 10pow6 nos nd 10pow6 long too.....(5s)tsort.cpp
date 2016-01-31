//#include<conio.h>
#include<stdio.h>

long a[1000002];
int main()
{
    long test=0,i,j,p;
    scanf("%ld",& test);
       
    for(i=0;i<test;i++)
    {

        scanf("%ld",& p);
      //  printf("%ld",a[p]); 
        a[p]++;     //putting the value of a[p] ==1 by 0+1.......nd in last l check this 1 or zero to sort...goood..haha
        // printf("%ld",a[p]);
    }
    
  
    for(i=0;i<=1000000;i++)
    {
        for(j=1;j<=a[i];j++)      // here we are checking its 1 or zero if 1 print it else go back....
            printf("%ld\n",i);     // for each no it will go only one time nd at a time inner for 'l move atmost 1 time@@@
            
    }
  //   getch();    
     return 0;
}       
