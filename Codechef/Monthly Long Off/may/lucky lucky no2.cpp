#include<iostream>

using namespace std;

int main()
{
    int i,temp,temp1,k,test,output=0;
    
    cin>>test;
   
    while(test--)
    {
          cin>>k;
          for(i=0;i<=k/4;i++)
          {     
                    temp=k-(4*i);
                   // cout<<"\n\t"<<temp<<"\n";
                    
                    temp1=temp%7;
                    if(temp1==0)
                        {  output=temp;break; }
                    else
                        { output=-1; break; }      
                   
           }       
           cout<<output<<"\n";
           
     }
return 0;
}                          
