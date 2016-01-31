//problem 3
#include<iostream>
#include<stdlib.h>
#include<stdlib.h>
using namespace std;


int main()
{
	int limit=200;
    bool a[200];
    
	int i,n;
    
    a[1]=false;  
    a[2]=a[3]=a[7]=a[5]=false;
    
    i=2;
    
    while(i<=((limit/2)+1))
     {
         a[2*i]=true;
         if(i<limit/3)
              a[3*i]=true;
         if(i<limit/3)
              a[5*i]=true;
         if(i<limit/3)
              a[7*i]=true;
         i++;
         
     }     
  
     i=1;
     cin>>n;
    // if(a[11]==false)
      //  cout<<"\nSfuck offf";
     while(i<n)
     {
         if(a[i]==false)
             cout<<i<<endl;
          i++;
     }
             system("pause");
}

