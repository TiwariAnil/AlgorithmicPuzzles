#include<iostream>
#include<stdlib.h>
using namespace std;
int a[10];

void quicksort(int[],int,int);
int partition(int a[],int ,int );
int main()
{      int left=0,right=9; 
       cout<<"enter the list of 10 noS";//only foer 10 values
       
       for(int i=0;i<10;i++)
       cin>>a[i];
       quicksort(a,left,right);
       for(int i=0;i<10;i++)
       cout<<a[i]<<"  ";
       system("pause");
       return 0;
       
       
}                
void quicksort(int a[],int left,int right)
{
       int pivot;
       if(left<right)
       {
          pivot=partition(a,left,right);//pivote is a positoin ` 1 2 3 4 54 5 65 anuy 1 of theim s o no its bet2n 1 to n
          
          
          quicksort(a,left,pivot-1);
          quicksort(a,pivot+1,right);  
        }        
}

int partition(int a[],int left,int right)
{
    int i,j,temp,swap;
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
