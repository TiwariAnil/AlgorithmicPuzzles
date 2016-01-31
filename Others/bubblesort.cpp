#include<iostream>
#include<stdio.h>
using namespace std;
void bubblesort(int [],int);
int main()
{    int sort[20],n;
    cout<<"Enter the number of elements you want to insert in an array max(20).........";
    cin>>n;
    cout<<"\nEnter the elements of array";
    for(int i=0;i<n;i++)
    cin>>sort[i];
    cout<<"\n Now sorting begins.........\n\n";
    system("pause");
    system("cls");
    bubblesort(sort,n);
    return 0;
    system("pause");
    }
    
    void bubblesort(int ar[],int size)
      {
       int j,i,temp,flag=1;
       for(i=0;i<size;i++)
           {     flag=1;
           for(j=0;j<(size-1)-i;j++)
                     { 
                        if(ar[j+1]<ar[j])
                           {
                              temp=ar[j];
                              ar[j]=ar[j+1];
                              ar[j+1]=temp;
                              flag=0;
                              }
                      }  
                      if(flag==1)
                      break;
                      else
                      {   
             cout<<"\nArray after pass---"<<i+1<<"---is:";
             for(j=0;j<size;j++)
            cout<<ar[j]<<" ";
                       }   
                              
           }
                if(flag==1)
              {
                      cout<<"\n\n\n The array is sorted and so no further iteration are needed\n";
                      }
           else {
                cout<<"\n\n\n\nnow the sorted array is\n";
           }
           for(i=0;i<size;i++)
            cout<<ar[i]<<" "; 
            system("pause");
      }
