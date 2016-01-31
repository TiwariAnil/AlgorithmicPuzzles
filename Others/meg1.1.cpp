#include<stdio.h>
#include<stdlib.h>
 
main()
{
   int row, c, n=5, temp=5,letter=65,no=1;
 
    
   for ( row = 1 ; row <= n ; row++ )
   {
      for ( c = 1 ; c < temp ; c++ )
         printf(" ");
 
      temp--;
 
      if(row%2==0)
         {   
          letter=65;
          for (c=1; c <= row  ; c++ )
            { 
               printf("%c",letter);
               printf(" ");
               letter++; 
            }
          }
      else
          {
            no=1; 
            for ( c = 1 ; c <= row  ; c++ )
            { 
               printf("%d",no);
               printf(" ");
               no++;
            }
          }     
      printf("\n");
   }
   system("pause");
   return 0;
}
