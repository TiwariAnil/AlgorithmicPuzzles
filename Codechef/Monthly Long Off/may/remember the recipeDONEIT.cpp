#include<string.h>
#include<iostream>

using namespace std;
struct recp
       {
           char a[1001];
       };   

int main()
{
    int i=0,j,k,q,n,string,l1,flag;
    long max,value[1001];
    char a[1001][1001],b[1001];
    
    cin>>n;
    
    while(i<n)
    {
          
          cin>>a[i];
          cin>>value[i];//j=strlen(a[i]);
          
          
          i++;    
    }    
    cin>>q;
    //max=-1000000000;
    for(i=0;i<q;i++)
    {
          cin>>b;  
          flag=0;
          l1=strlen(b);
          max=-1000000001;
          for(k=0;k<n;k++)
          {
            // cout<<"\n\n\t"<<a[k]<<"\n\n";
          for(j=(l1-1);j>-1;j--)
          {  
                 if(b[j]!=a[k][j])
                     break;
                 if(j==0)
                 {
                 if(max<value[k])
                   {
                       max=value[k];
                       string=k;
                       flag=1;
                   } 
                 } 
           }                       
           }       
           if(flag==1)
               cout<<a[string]<<"\n";
           else
                cout<<"NO\n";
      }
return 0;

}
