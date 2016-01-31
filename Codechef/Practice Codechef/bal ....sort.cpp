#include <conio.h>
#include <stdio.h>
//#include <math.h>
int totnumbers[1000002];
 
int main()
{
   	int t;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	{
		int curr;
		scanf("%d",&curr);
		totnumbers[curr]++;
	}
	for(int i=0;i<=1000000;i++)
	{
		for(int j=1;j<=totnumbers[i];j++)
			printf("%d\n",i);
		
	}
	getch();
	return 0;
} 
