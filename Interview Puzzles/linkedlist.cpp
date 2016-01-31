#include<iostream>
using namespace std;

class linklist
{
	private:
		struct node
		{
			int info;
			node * next;
		}*start,*last,*save;
		int count;
	public:
		node * askstart()
		{
			return start;
		}
		linklist();
		void insert_beg(int);
		void insert_end(int);
		void delete_x(int y);
		void detectacycle();
		int search(node * ,int);
		void display();

};
linklist:: linklist()
{
	start=NULL;
	count=0;
}

void linklist ::insert_beg(int x)
{
	node * temp,*var;
	temp=new node;
	temp->info=x;
	temp->next=NULL;
	if(start==NULL)
		start=temp,last=temp;
	else
	{
		
		temp->next=start;
		start=temp;
	}
}

void linklist ::insert_end(int x)
{
	node * temp;
	temp=new node;
	temp->info=x;
	temp->next=NULL;
	if(start==NULL)
		start=temp,last=temp,count++;
	else
	{
		last->next=temp;
		last=temp;
		count++;
		if(count==11)
		{	
			save=temp;	
			cout<<"The saved pointer : "<<save->info<<endl<<endl;
		}
	
	}
	
}
void linklist :: delete_x(int y)
{
	node * temp;
	temp=start;
	if(temp->info==y)
		{start=start->next;return ;}
	while(temp!=NULL)
	{
		if((temp->next)->info==y)
			{
				node * var;
				var=temp->next;
				var=var->next;;
				temp->next=var;
				return ;
			}
		temp=temp->next;
	}
	cout<<"The no was not in the list :(\n\n";
}
int linklist ::search(node * yum,int x)
{
	if(yum==NULL)
		{cout<<"Not found \n";return 0;}
	if(yum->info==x)
		{cout<<"Element was found\n\n";return 1;}  
	else
		search(yum->next,x);
	return 0;
}
void linklist ::display()
{
	node * temp;
	temp=start;
	
		while(temp!=NULL)
			{
				cout<<temp->info<<"->";
				temp=temp->next;
				//for making it a cycle
				if(temp->next==NULL)
					{temp->next=save;cout<<"making a cycel";break;}//break;}	
			
			
			}  
		return ;
}

void linklist :: detectacycle()
{
	if(start==NULL)
		return ;
		
	node * slow=start;
	node * fast=(start->next)->next;
	while(fast!=NULL)
	{
		if(slow==fast)
			{cout<<"\n\nThis is a cycle: :)) \n\n";return;}	
		slow=slow->next;
		fast=(fast->next)->next;
	}
	cout<<"\n\nNOt a cycle :(\n\n";
	return;
}
int main()
{
	linklist lst;
	//for(int i=1;i<11;i++)
	//	lst.insert_beg(i);
		
	for(int i=100;i<118;i++)
		lst.insert_end(i);	
	//lst.delete_x(10);
	//lst.search(lst.askstart(),103);
	lst.display();
	lst.detectacycle();
	return 0;

}
