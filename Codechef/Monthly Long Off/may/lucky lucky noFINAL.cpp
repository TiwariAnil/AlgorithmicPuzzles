#include<iostream>

using namespace std;

int main()
{
    long i,temp,temp1,k,test,output=0;
    
    cin>>test;
   
    while(test--)
    {
          cin>>k;
          for(i=0;i<=k/4;i++)
          {     
                    temp=k-(4*i);
            //        cout<<"\n\t"<<temp<<"\n";
                    
                    temp1=temp%7;
                    if(temp1==0)
                        if(temp==0)
                         {  output=0;break;}
                        else   
                          {  output=(k-(4*i));break; }
                    else
                        output=-1;     
                   
           }       
           cout<<output<<"\n";
              
     }
return 0;
}              
