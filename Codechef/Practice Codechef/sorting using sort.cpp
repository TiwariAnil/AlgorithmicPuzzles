#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void quicksort(long [],long,long);
long partition(long a[],long,long );
  
  
  


long a[1000000]={0};
int main()
{
    long test=0,i=0,p,left=0,right;
    cin>>test;//scanf("%l",& test);
    printf("\n\n\%d",test);
    printf("%d\n\n",i);
    while(i < test)
    {
        printf("%d\n",test);
        cin>>a[i];//scanf("%l",& a[i]);
        i++;
    }
    right=test-1;
        quicksort(a,left,right);
   // sort(a,a+test);
    i=0;
    while(i<test)
    {
        printf("%l",a[i]);
        printf("\n");
        i++;
    }
     getch();    
     return 0;
}       

                     
void quicksort(long a[],long left,long right)
{
       long pivot;
       if(left<right)
       {
          pivot=partition(a,left,right);//pivote is a positoin ` 1 2 3 4 54 5 65 anuy 1 of theim s o no its bet2n 1 to n
          
          
          quicksort(a,left,pivot-1);
          quicksort(a,pivot+1,right);  
        }        
}

long partition(long a[],long left,long right)
{
    long i,j,temp,swap;
    i=left+1;
    j=right;                         
    temp=a[left];
  while(i<j)
  {  
    while(a[i]<temp)
         i++; 
    while(a[j]>temp)
         j--;
    if(i<j)
    {
       swap=a[i];
       a[i]=a[j];
       a[j]=swap;
    }  
   } 
   swap=a[left];
   a[left]=a[j];
   a[j]=swap;
   return j;                             
                    
}
