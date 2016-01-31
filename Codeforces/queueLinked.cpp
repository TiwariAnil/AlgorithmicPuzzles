//   linked queue implementation
#include<iostream>
using namespace std;
struct node 
{
	int info;
	node *next;
}*front,*rear,*newptr,*save,*ptr;

node *create(int);
void insert(node *);
void display(node *);
int main()
{
	front=rear=NULL;
	int inf; char ch;
	while(ch=='y')
	{
		cout<<"\nEnter the info for node:  ";
		cin>>inf;
		newptr=create(inf);
		if(newptr==NULL)
		      exit(1);
		 insert(newptr);
		 display(front);     
		cout<<"\nWant to enter more(y/n):   ";
	}
	
}
