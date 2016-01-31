#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class test
{
    public:
    int find()
    {
        int n,i,temp,t;//,flag=0;
		cin>>n;
        for(i=1;i<=n;i++)
        { 	
			if(i==1)
			  {temp=3;cout<<temp;}
			else
			    temp=temp+3;
			//
			if(i>1)
			 if(temp<=n)
			   cout<<" "<<temp; 
			else
			{  t=n-temp+3;
			   //cout<<"ass"<<t<<endl;
				if(t==1)
				   temp=1;//,flag=1;
				else
				   temp=2;//,flag=1;
			
		     	cout<<" "<<temp;
			}    
				
		}
		return 0;
    }
};
int main()
{
     test t;
     t.find();
     return 0;
}
