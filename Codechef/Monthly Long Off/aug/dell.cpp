#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define MAX 252
using namespace std;


int a[MAX][MAX], w[MAX][MAX];

int main()
{
	int i, j,k,v;
	scanf("%d",&v);
    for(i=0;i<v;i++)
  	{
	   for(j=0;j<v;j++)
		    scanf("%d",&w[i][j]);
	}	    
	//k=0;
	/*for(i=0;i<v;i++)
	{
		 for(j=0;j<v;j++)
	  		d[k][i][j]=w[i][j];
	}*/
	for(k=0;k<v;k++)
	{
	    for(i=0;i<v;i++)
	    {
	 	     for(j=0;j<v;j++)
	    	   w[i][j]=min(w[i][j],w[i][k]+w[k][j]);
	    }
	}
	
	int q,x,y,z,m,n;
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d%d%d",&x,&y,&z);
		//x++,y++,z++;
		m=w[x][y]+w[y][z];	
		printf("%d %d\n",m,m-w[x][z]);
	}	
	/*
	    for(i=1;i<=v;i++)
	   	{	
	    	printf("\n");
	     	for(j=1;j<=v;j++)
	     	printf("\t %d",w[i][j]);
	    }
    */
    return 0;
//	system("pause");
}
