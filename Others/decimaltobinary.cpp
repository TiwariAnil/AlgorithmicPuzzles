#include<iostream>
using namespace std;

int decimaltobinary();
int decimaltooctal();
int decimaltohex();
int binarytodecimal();
int main()
{    int t;
     cout<<"1. dec to binary \n2. dec to octal\n3.decimal to hex\n\n";
     cout<<"Enter ur choice no";
     cin>>t;
     switch(t)
     { 
      case 1 :   decimaltobinary();
                break;          
      case 2 :    decimaltooctal();
                break;
      case 3 :    decimaltohex();
                break;     
      case 4 :    binarytodecimal();

                break; 


      default : break;
     }
     system("pause");
     return 0;
 }
 
 
 int decimaltobinary()
 {
     int x,p,i=0,k[20],j;
 
     cout<<"\nenter the no.....";
     cin>>x;
     p=x;
    
     while(p!=0)
     { 
           k[i]=p%2;
           //cout<<k;
           //ch[i]='k';
           i++;     
           p=p/2; 
      }
     for(j=(i-1);j>=0;j--)
      cout<<k[j];
     return 0;
  }


   int decimaltooctal()
   {
       int x,p,i=0,k[20],j;
 
     cout<<"\nenter the no.....";
     cin>>x;
     p=x;
    
     while(p!=0)
     { 
           k[i]=p%8;
           //cout<<k;
           //ch[i]='k';
           i++;     
           p=p/8; 
      }
     for(j=(i-1);j>=0;j--)
      cout<<k[j];
     return 0;
       
       }


int decimaltohex()
   {
       int x,p,i=0,k[20],j;
 
     cout<<"\nenter the no.....";
     cin>>x;
     p=x;
    
     while(p!=0)
     { 
           k[i]=p%16;
           //cout<<k;
           //ch[i]='k';
           i++;     
           p=p/16; 
      }
     for(j=(i-1);j>=0;j--)
      {
            if(k[j]<10)
               cout<<k[j];
            else if(k[j]==10)
               cout<<"A";
            else if(k[j]==11)
               cout<<"B";
            else if(k[j]==12)
               cout<<"C";
            else if(k[j]==13)
               cout<<"D";
            else if(k[j]==14)
               cout<<"E";
            else 
                  cout<<"F";
                        
      }     
     return 0;
       
       }
int binarytodecimal()
{
    int x,p,i=0,k,value=0,l;
 
     cout<<"\nenter the no.....";
     cin>>x;
     p=x;
    
     while(p!=0)
     { 
           k=p%10;
           value=value+( k*(2^i)); 
           i++;
          // l=p;
           p=p/10;
      }
       // k=l%10;
        //i++;
        value=value+( k*(2^i)); 
           
      
     cout<<value;
     return 0;
}       
    
