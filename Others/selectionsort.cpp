#include<iostream>
#include<stdio.h>
using namespace std;
void selectionsort(int [],int);
int main()
{    int sort[20],n;
    cout<<"enter the number  you want to insert in an array ...";
    cin>>n;
    cout<<"\nenter the elements ";
    for(int i=0;i<n;i++)
    cin>>sort[i];
    cout<<"\n Now sorting begins.........";
    selectionsort(sort,n);
    return 0;
    system("pause");
    }
    
    void selectionsort(int ar[],int size)
      {
       int j,i,pos,temp,small,flag=1;
       for(i=0;i<size;i++)
           {      small=ar[i];
                  pos=i;
                  for(j=i+1;j<size;j++)
                     { if(ar[j]<small)
                           {
                           small=ar[j];
                           pos=j;
                           }
                      }      
             temp=ar[i];
             ar[i]=ar[pos];
             ar[pos]=temp; 
             cout<<"\narray after pass---"<<i+1<<"---is:";
             for(j=0;j<size;j++)
            cout<<ar[j]<<" ";
                            
           }
               cout<<"\n\n\nnow the sorted array is\n";
           for(i=0;i<size;i++)
            cout<<ar[i]<<" "; 
            cout<<"\n";
            system("pause");
      }
