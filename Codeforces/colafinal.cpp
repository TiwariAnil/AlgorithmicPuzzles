#include<iostream>
#include<math.h>
// "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" 
//   1         2          3        4          5
using namespace std;
struct node 
	{
		int info;
		node *next;
	}*front,*rear,*newptr,*save,*ptr;
	
class word
{
	public:
	int check()
	{
		int n,i,temp,val,t;
	    cin>>n;
	    int z=5;
	    if(n<6)
	          temp=n;
	    else
		{	      
		    for(i=1;i<n;i++)
			{   t=z; 
				z=z+(pow(2,i)*5);
		         if(n>t && z>n )
		             break;
			}
			val=i--;
			if(n<t+pow(2,val))
			       temp=1;
			else if(n<t+(2*pow(2,val)))      
				temp=2;
			else if(n<t+(3*pow(2,val)))
			  	temp=3;
			else if(n<t+(4*pow(2,val)))
				temp=4;
			else temp=5;
		}	 		  	
		switch(temp)
		{
			case 1: cout<<"Sheldon";break;	
			case 2: cout<<"Leonard";break;
			case 3: cout<<"Penny";break;
			case 4: cout<<"Rajesh";break;
			case 5: cout<<"Howard";break;
		}
		 return 0;    
	}
};

int main()
{
	word t;
	t.check();
	return 0;
}
