#include<stdio.h>
#include<stdlib.h>
int a[5001];
int find(int i)
{
	if(a[i]==i)
		return i;
	else
		return a[i]=find(a[i]);
}
void unionset(int x,int y)
{
	a[y]=x;
}
int main()
{
	int t,n,i,j,k,m,s,e,x,y,flag;
	
	scanf("%d %d",&n,&m);
	flag=0;
	for(i=0;i<5001;i++)
		a[i]=i;
	for(i=0;i<m;i++)
	{
		scanf("%d %d",&s,&e);
		if(flag!=1)
		{
			x=find(s);
			y=find(e);
//			printf("%d %d %d %d\n",s,e,x,y);
		}
		
		if(x==y)
		{
			flag=1;
//			printf("Here\n");
		}
		
		if(flag!=1)
		{
			if(x!=y)
				unionset(x,y);
			
		}
	}
			if(flag==1)
				printf("corrupt\n");
			else
				printf("not corrupt\n");

	return 0;
}

