#include<iostream>
#include<stdlib.h>
using namespace std;
//#include<process.h>
int push(int [],int ,int &);
int pop(int [],int,int &);
int display(int [],int);

int main()
 {
 
     int z,size,top=-1,k,stack[20],flag=1;
     cout<<"enter the size of the stack";
     cin>>size;
     while(flag)
     {
     cout<<"\n\t\t\t MENU";
     cout<<"\n1. PUSH\n2.DISPLAY \n3.POP"
          <<"\nENTER UR CHOIcE.......";
     cin>>z; 
     if(z==1)    
          push(stack,size,top);
     else if(z==3)
         { pop(stack,size,top);display(stack,top);}
     else if(z==2)     
          display(stack,top); 
     else 
           cout<<"\ninvalid choice";
      
	  
	 cout<<"\nenter 1 to retun to main menu nd 0 to exit..............";
	 cin>>flag;
	}
     system("pause");
	 return 0;
     
 }

int push(int stack[],int size,int & top)
 {
       int x;
       if(top==size-1)
              cout<<"overflow";
              
       else
       {
              cout<<"enter the value";
              cin>>x;
              top++;
              stack[top]=x;
       }
       return 0;              
         
         
 }
int pop(int stack[],int size,int & top)
 {
       if(top==-1)
              cout<<"underflow";
              
       else
       {
              cout<<"element deleted : "<<stack[top];     
              top--;
       }
       return 0;              
       
 }                
int display(int stack[],int top)
  {      
        cout<<"the stack : top to bottom \n\n";
            while(top!=-1)
             {
                  cout<<stack[top]<<"-->";
                  top--;
             }                
        return 0;
  }
  























































