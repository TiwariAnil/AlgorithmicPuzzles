#include<iostream>
#include<stdio.h>
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
		int n,i,j=5,temp;
		front=rear=NULL;
		int inf;
	    cin>>n;
	    
	    for(i=0;i<5;i++)
	    {   newptr=create(i+1);
		//	if(newptr==NULL)
		  //  	 return 0;// exit(1);
			if(front==NULL)
			    front=rear=newptr;
	    	else
			insert(newptr);
		}
		int count=5;
	    for(i=0;i<n;i++)
	    {
			temp=front->info;
			del(front);
			if(count<n+1)
			{	newptr=create(temp);
			    insert(newptr);
				newptr=create(temp);
				insert(newptr);
				count+=2;	
			}
			
			
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
	node *create(int x)
	{
		ptr=new node;
		ptr->info=x;
		ptr->next=NULL;
		return ptr;
	}
	void insert(node *np)
	{
				rear->next=np;
				rear=np;
	}
	void del(node *)
	{
		//if(front==NULL)
		  // cout<<"\nunderflow\n";
		//else
	//	{
		    ptr=front;
			front=front->next;   
			delete ptr;
	//	}
	}		


	
};

int main()
{
	word t;
	t.check();
	return 0;
}
