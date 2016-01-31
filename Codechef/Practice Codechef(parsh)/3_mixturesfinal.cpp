#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
main()
{
int smoke[100][100]={0};
int mixture[100][100]={0};
int colours[100];
int i,j,k,total_jars,min,flag,temp,p,sum;
while(scanf("%d",&total_jars)!=EOF)
{
	for (i=0;i<total_jars;i++)
		{
		scanf("%d",&mixture[i][i]);
		colours[i]=mixture[i][i];
		//smoke[i][i]=mixture[i][i];
		}
		for (i=0;i<total_jars;i++)
		          cout<<colours[i]<<" ";
        cout<<endl;
        for (i=0;i<total_jars;i++)
		  { for (j=0;j<total_jars;j++)
		        cout<<mixture[i][j]<<" ";
			cout<<endl;}	
		temp=total_jars;
	sum=0;	
		for (i=0;i<total_jars;i++)
		{
		smoke[i][i]=0;
		}
	for (i=0; i<total_jars; i++)
		{
			sum = mixture[i][i];
			for (j=i+1; j<total_jars; j++)
			{
				sum =sum + colours[j];
				mixture[i][j] = sum % 100;
			}
		}	
		
        for (i=0;i<total_jars;i++)
		  { for (j=0;j<total_jars;j++)
		        cout<<mixture[i][j]<<" ";
			cout<<endl;}	
	j=0;
	p=1;
	while(temp!=0)
	{	for (i=0;i<temp;i++)
			{	j=i+p;
				min=999999;
				for (k=i+1;k<=j;k++)
				{
					if ((smoke[i][k-1]+smoke[k][j]+mixture[i][k-1]*mixture[k][j])<min)
							{
								min=smoke[i][k-1]+smoke[k][j]+mixture[i][k-1]*mixture[k][j];
								flag=k;
							}
				}
			smoke[i][j]=min;
			}
		temp--;
		p++;
	}
	
        for (i=0;i<total_jars;i++)
		  { for (j=0;j<total_jars;j++)
		        cout<<smoke[i][j]<<" ";
			cout<<endl;}	
	printf ("%d\n",smoke[0][total_jars-1]);
 }
}