#include<stdio.h>
int prime[1000001];
int check[1000001];
int k=1;

int genprime(int n)
{
	long long int i,j,z;
	
	for(i=3;i<n;i+=2)
	{
		if(check[i]!=1)
		{
			prime[k++]=i;
			z=i;
			j=i;
			while(z<=n)
			{
				check[z]=1;
				z=j*i;
				j+=2;
			}
		}
	}
	return k;
}
int tazo[10001];
struct item
{
	int root;
	int wt;
	int count;
};
struct item a[10001];

int find(int i)
{
	if(a[i].root==i)
		return i;
	else
		return a[i].root=find(a[i].root);
}
void unionset(int x,int y)
{
	if(a[y].count>a[x].count)
	{
		a[x].root=y;
		a[y].wt+=a[x].wt;
		a[y].count+=a[x].count;
	}
	else
	{
		a[y].root=x;
		a[x].wt+=a[y].wt;
		a[x].count+=a[y].count;
	}
}
long long int m;
int main()
{
	int t,n,i,j,k,p,s,e,x,y,c,ans,f,d;

	for(i=0;i<100;i++)
		check[i]=0;
	prime[0]=2;
	c=genprime(1000000);
//	printf("%d\n",prime[c-1]);
//	printf("%d\n",c);
//	for(i=0;i<c;i++)
//		printf("%d ",prime[i]);
//	printf("\n");

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %lld %d",&n,&m,&p);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&tazo[i]);
			a[i].root=i;
			a[i].wt=tazo[i];
			a[i].count=1;
		}
		for(i=0;i<m;i++)
		{
			scanf("%d %d",&s,&e);

			x=find(s);
			y=find(e);
//			printf("%d %d\n",x,y);
			if(x!=y)
			{
				unionset(x,y);
			}
		}
		ans=0;
		for(i=1;i<=n;i++)
		{
//			printf("%d %d %d %d\n",i,a[i].root,a[i].wt,a[i].count);
			if(a[i].root==i)
			{
				f=0;
				d=(a[i].wt+p);
				for(j=0;j<c;j++)
				{
					if(d==prime[j])
					{
						f=1;
						break;
					}
				}
//				printf("f : %d\n",f);
				if(f==1)
				{
					ans++;
				}
			}
		}
		printf("%d\n",ans);
	}
	
	return 0;
}
