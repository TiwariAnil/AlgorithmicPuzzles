#include <iostream>
using namespace std;
int main()
{  
    int intLength =0,dn,digit,*ptr,k,z,j,even=0,odd=0,d=0,cas;
    cin>>cas;
//    ptr=new int;//(int*)malloc(sizeof(int)*cas);
    long long unsigned a,b;
     
    for(j=0;j<cas;j++)    
    {  
            cin>>a>>b;   
            dn=0; 
           
        for(k=a;k<=b;k++)
         {    
              z=k;
              while(z!=0)
              {                         
                        digit = z % 10;
                        if(digit%2==0)
                            even=even+digit;
                        else
                            odd=odd+digit;
                        z = z / 10;        
                }
                             
                        
                         d=((even<<1)+odd)%10;
                         dn+=d;
                         odd=even=0;
         }
        cout<<dn<<endl;// ptr[j]=dn; 
    }
  // for(j=0;j<cas;j++)
  // cout<<ptr[j]<<"\n";
  
   return 0;
}
