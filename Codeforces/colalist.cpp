#include<iostream>
#include<list>
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
		int n,i,temp,val;
		list <int> lst;
		cin>>n;
		val=(n-5)/2+1;
	    for(i=0;i<5;i++)
	    {
			lst.push_back(i+1);
		}
		list<int>::iterator p=lst.begin();
		int count=5;
	    for(i=0;i<val+1;i++)
	    {
			p=lst.begin();
			temp=*p;
			lst.pop_front();
			if(count<=val)
			{	
				lst.push_back(temp);
            	lst.push_back(temp);   
			}
			count+=2;
			if(count==n-1)
			  break;	
					
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
