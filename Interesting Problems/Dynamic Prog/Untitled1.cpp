#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
	char a[100][100];
	int i=0, j=0,max=0,temp;
	while(cin.getline(a[i],100)) && i<3)//gets(a[i]) && i<3scanf("%s",&a[i]
	{   
	//	printf("%s\n", a[i]);
	    
		  //cout<<strlen(a[i])<<endl;
		 // printf("%d\n", strlen(a[i]));
	     temp=strlen(a[i]);
		if(max < temp)
	        max=temp;
	       i++;
	}

	cout<<endl<<endl;
	int k,t;
	for(j=0;j<=max;j++)
	{
		for(t=i;t>=0;t--)
		{
		 if(a[t][j]!='\0' || a[t][j]!=NULL )
		   	cout<<a[t][j];
		   	else
		   	cout<<" ";
		   	
		   	
		}
		//k++;
		cout<<"\n";
	    
	}
	
	
}
