// Hashing
#include<iostream>
#include<string>
using namespace std;
struct node
{
	string s;
	node * next;
}*temp,*var,*last,*arr[10];

main()
{
	int t;
	for(int i=0;i<10;i++)
		arr[i]=NULL;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int no;
		string str;
		cin>>no;
		no=no%10;
		cin>>str;
		temp=new node;
		temp->s=str;
		temp->next=NULL;
		if(arr[no]==NULL)
			arr[no]=temp;
		else
			{
				var=arr[no];
				//this is not done , put the element at the 
				//begening of the list :) no while().
				while(var->next!=NULL)
				{
					//cout<<var->s;
					//last=var;
					var=var->next;	
				}
				var->next=temp;	
			}
	}
	for(int i=0;i<10;i++)
	{
		temp=arr[i];
		while(temp!=NULL)
			{cout<<temp->s<<"->";temp=temp->next;}     
		cout<<endl;
	}
}
/*
5
34
anil
34
sunil
34
gamam
34
bithch
*/
