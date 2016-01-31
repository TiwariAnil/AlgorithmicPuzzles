//Tree
#include<iostream>
using namespace std;

struct node
{
	node * left;
	int info;
	node * right;
}*start,*tree2,*tre,*temp,*curr,*var,*see,*root;

node * create(int x)
{
	temp=new node;
	temp->info=x;
	temp->right=temp->left=NULL;
	return temp;
}
int input(node * add)
{
	see=root;
	int flag=0;
	while(flag==0)
	{	
		if(see->info < add->info)
			if(see->right==NULL)
				see->right=add,flag=1;
			else
				see=see->right;
		else
			if(see->left==NULL)
				see->left=add,flag=1;
			else	
				see=see->left;
	}
	return 0;
}
int inorder(node * base)
{
	if(base!=NULL)
	{
		inorder(base->left);
		cout<<base->info<<" - ";
		inorder(base->right);
	}	
		
	return 0;
}

int preorder(node * base)
{
	if(base!=NULL)
	{
		cout<<base->info<<" - ";
		preorder(base->left);
		
		preorder(base->right);
	}	
		
	return 0;
}

int decending(node * base)
{
	if(base!=NULL)
	{
		decending(base->right);
		cout<<base->info<<" - ";
		decending(base->left);
	}
	return 0;
}

int doublycreate(node * root)
{
	if(root!=NULL)
	{
		doublycreate(root->left);
			if(start==NULL)
				{
					var=new node;
					var->left=NULL;
					var->right=NULL;
					var->info=root->info;
					start=var;
					curr=start;
				}
			else
				{
					var=new node;
					var->left=NULL;
					var->right=NULL;
					var->info=root->info;
					curr->right=var;
					curr=var;
				}	
		doublycreate(root->right);
	}
	return 1;
}
int doublydisplay(node * start)
{
	see=start;
	while(see!=NULL)
		{cout<<see->info<<" - "; see=see->right;}
	return 1;
}

int tree2insert(int x)
{
	
	if(tree2==NULL)
	{
		var=new node;
		var->left=NULL;
		var->right=NULL;
		var->info=x;
		tree2=var;
	}
	else
	{
		int flag=0;
		var=new node;
		var->left=NULL;
		var->right=NULL;
		var->info=x;
		tre=tree2;
		while(flag==0)
		{
			if(x<tre->info)
				if(tre->left==NULL)
					tre->left=var,flag=1;
				else
					tre=tre->left;	
			else
				if(tre->right==NULL)
					tre->right=var,flag=1;
				else
					tre=tre->right;
		}
	return 0;	
	
	}

}


int treefrmdll(node * head)
{
	if(head!=NULL)
	{
		while(head!=NULL)
		{
			tree2insert(head->info);
			head=head->right;
		}
	}
	return 0;
}

main()
{
	int x;
	int p=5;
	while(p--)
	{
		cin>>x;
		var=create(x);
		if(root==NULL)
			root=var;
		else
			input(var);
	}
	
	
	
	cout<<"\nInorder :\n\n";
	inorder(root);
	cout<<"\n\n";
	
	//decending(root);
	cout<<"\nPreorder :\n\n";
	preorder(root);
	
	cout<<"DLL from BST : \n\n"; 	
	doublycreate(root);
	doublydisplay(start);	
	
	
	cout<<"\n\nBST from Dll : \n\n";	
	treefrmdll(start);
	inorder(tree2);


	return 0;
}


/*

50
66
88
67
56
34
89
99
22
24
11
60
84
82

*/
