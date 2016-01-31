#include<iostream>

using namespace std;

int main()
{
    int i,temp,temp1,k,test,flag,output=0;
    
    cin>>test;
   
    while(test--)
    {
          cin>>k;
          for(i=0;i<=k/4;i++)
          {     
                    temp=k-(4*i);
                    cout<<"\n\t"<<temp<<"\n";
                    
                    temp1=temp%7;
                    if(temp1==0)
                        if(temp==0)
                         {  output=0; flag=1;break;}
                        else   
                          {  output=(k-(4*i)); flag=1;break; }
                  
                   
           }       
           if(flag==0)
              output=-1;
           cout<<output<<"\n";
                            
     }
return 0;
}                          
