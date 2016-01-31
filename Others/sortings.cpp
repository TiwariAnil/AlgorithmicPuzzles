#include<stdio.h>
#include<iostream.h>

void main()
{
     selectionsort()
 }
void Selectionsort()
{
      int i, j, first, temp;
      int numLength = num.length( );
      for (i= numLength - 1; i > 0; i--)
     {
           first = 0;                 // initialize to subscript of first element
           for (j=1; j<=i; j++)   // locate smallest between positions 1 and i.
          {
                 if (num[j] < num[first])
                 first = j;
          }
         temp = num[first];   // Swap smallest found with element in position i.
         num[first] = num[i];
         num[i] = temp;
     }
     return;
}
********************************************************************
  #include<iostream.h>

  void main(void)
  {
   int temp, i, j;
   int ar[10];

   cout<<"enter elements of array:\n";
   for(i=0; i<10; i++)
     cin>>ar[i];

   // sorting is done here
   for(i=0;i<10;i++)
     for(j=0; j<(10-1); j++)
       if (ar[j]>ar[j+1])
         {
          temp=ar[j];
          ar[j]=ar[j+1];
          ar[j+1]=temp;
         }
   // till here
  
   for(i=0; i<10; i++)
     cout<<endl<<ar[i];
  
   cout<<endl;
  }
  
  
**********************************************************************
  
