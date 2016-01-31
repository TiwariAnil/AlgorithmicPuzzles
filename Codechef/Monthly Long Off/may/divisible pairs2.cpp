#include<iostream>

using namespace std;
long a[100000000]={0};
int main()
{
    
    long long n,i,j,l,test,m1,m,p,count=0;
    
    cin>>test;
    
    while(test--)
    {
        cin>>n;
        cin>>m;
        count=0;
        if((2*n)<m)
           count=0;
        else
        {  
            n<<1;
            
          for(l=1;(m*l)<n;l++)
           {        a[l-1]=m*l; 
                   
           }            
         
          for(j=0;j<l;j++)     
           {   m1=a[j];
                     p=m1/((j+1)*2);
                     count+=p;
           } 
            
          
        }
            cout<<count<<"\n";
    }
  return 0;
}
