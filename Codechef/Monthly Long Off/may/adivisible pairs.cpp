#include<conio.h>
#include<iostream>

using namespace std;
struct recp
       {
           char a[1001];
       };   

int main()
{
    int i,j;
    long test,n,m,count=0;
    
    cin>>test;
    
    while(test--)
    {
        cin>>n;
        cin>>m;
        if((2*n)<(m+1))
           {count=0;break;}
         else
          { 
            for(i=1;i<=m;i++)
               for(j=i;j<=m;j++)
                  if(i+j==m)
                     count++;
              j=2;       
               while(m*j<=n)
               {
                    j++;count++;             
                }
            }
            cout<<count<<"\t\n";
    }
    getch();
return 0;

}
