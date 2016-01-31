#include<stdio.h>
#include<stdlib.h>
 
main()
{
   int row, c, n=5, temp=5,letter=65,no=1; //as i m using letters n nos both so 2 variable.....nd n=temp=5 is for 5 rows
 
    
   for ( row = 1 ; row <= n ; row++ )
   {
      for ( c = 1 ; c < temp ; c++ )
         printf(" ");
 
      temp--;
 
      if(row%2==0)               // this is to chek whethr the line is odd or even 
         {   
          for (c=1; c <= row  ; c++ )   //if even then i m printing letters
            { 
               printf("%c",letter); //this is worth understanabl as we need to print letters so "%c"
                                    // but in asci, capital letters start from 65 onwards....  
               printf(" ");        //space 
               letter++;               // ++ for next letter :) 
            }
          }
      else
           for ( c = 1 ; c <= row  ; c++ )  // jumps here if the line encountrd is odd
            { 
               printf("%d",no);          // print the no 
               printf(" ");          // print the space
               no++;                    // increment the no for next print
               
            }
      printf("\n");
   }
   system("pause");
   return 0;
}
