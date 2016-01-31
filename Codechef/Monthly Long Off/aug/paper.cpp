#include<iostream>
#include<stdio.h>
using namespace std;	
int a[1000000];
class word
{
	public:
	int check()
	{
		int test,r,m,b,i,j,w,k,tx1,tx2,tn1,tn2,x,y,z;
		int max1,min2,max2,min1;
		cin>>test;
		while(test--)
		{
			//cin>>r>>b;
			scanf("%d%d",&r,&b);
			max1=r;//max2=r;
			min1=1;//max2=1;
			//tx1=tx2=r;
			//tn1=tn2=1;
			//int *t=new int[b] ;		
			
			for(i=1;i<=r;i++)
				a[i]=i;
			for(i=0;i<b;i++)
			{
				scanf("%d%d%d%d",&w,&x,&y,&z);
				if(w==2&&z!=0)
				{	for(j=x;j<=y;j++)	
						{a[j]-=z;}
				
					if(a[x]<a[min1])
						tn1=min1,min1=x;//,min1=a[x];
				
				}
				else
				{	for(j=x;j<=y;j++)	
						{a[j]+=z;}	
					
					if(a[y]>a[max1])
						tx1=max1,max1=y;
				}
				
			}		
			if(a[tn1]<a[min1])
				min1=tn1;
			if(a[tx2]>a[max1])
				max1=tx1;	
			printf("%d\n",a[max1]-a[min1]);
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
/*	
					//,temp=x;
					//if(a[x]<min)
					//	min=a[x];
				//	for(k=1;k<=r;k++)
				//		cout<<a[k]<<" ";
				//	cout<<endl;
				}
				if(w==1&&z!=0)
				{
				//	cout<<endl<<endl;
					
					for(j=x;j<=y;j++)	
						{a[j]+=z;}//;for(k=1;k<=r;k++)cout<<a[k]<<" ";}
					
				if(a[y]>max2)
					tx1=max2,max2=a[y];
				if(a[x]<min2)
					tn1=min2,min2=a[x];
				
					//if(a[y]>max)
					//	max=a[y];
				//	for(k=1;k<=r;k++)
				//		cout<<a[k]<<" ";
				//	cout<<endl;
				}
			}
	/*		for(i=1;i<=r;i++)
			{
				//a[i]+=i;
				if(a[i]>max)
					max=a[i];
				if(a[i]<min)
					min=a[i];		
			}
			//cout<<max<<min;
			//cout<<max-min<<endl;
			if(min1<min2 )
				if(min<tn1)
					if(min1<tn2)
			//if(max1<max2 && a[tx2]==max2)
			//	max1=max2;
			//if(a[tn2]==min2 && a[tn1]!=min1)
			//	min1=min2;
			
		//	if(a[tx2]==max2 && a[tx1]!=max1 )
		//		max1=max2;*/
