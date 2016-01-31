//#include<stdio.h>
#include<string.h>

#include<iostream>
using namespace std;


int main()
{
    int i=0,j=0,count=0,l1,l2,test,k,arr[150];//all ascii char comes in bet 0 to 133!!!
    char jewl[1000],stone[1000];
    cin>>test;
    
             while(i<132)
             {
                  arr[i]=0;
                  i++;            
              } 
    i=0;
    while(test--)
    { 
            i=0;j=0;
            cin>>jewl;//scanf("%s",&jewl);
            l1=strlen(jewl);
            cin>>stone;// scanf("%s",&stone);
            l2=strlen(stone);
            while(i<l1)
            {  
                       k=jewl[i];
                       arr[k]=1;
                       i++;
            }
            while(j<l2)    
            {
                       k=stone[j];
                       if(arr[k]==1)
                            count++;
                       j++;     
             }
             cout<<count;  
             i=0;count=0;
             while(i<133)
             {
               arr[i]=0;   
               i++;
             }   
    }
    return 0;
}                                  
