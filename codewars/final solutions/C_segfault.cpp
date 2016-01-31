#include<stdio.h>
int n,m,i,j;
int main()
{
	scanf("%d %d",&n,&m);
	int arr1[m],arr2[m];
	int grp[n+1];
	for(i=0;i<n+1;i++)
		grp[i]=i;
	for(i=0;i<m;++i)
	{
		scanf("%d %d",&arr1[i],&arr2[i]);
		if(grp[arr1[i]]==grp[arr2[i]])
		{
			printf("corrupt");
			return 0;
		}
		else
		{
			for(j=0;j<n+1;++j)
			{
				if(grp[j]==grp[arr2[i]])
				{
					grp[j]=grp[arr1[i]];
				}
			}
		}
	}
	printf("not corrupt");		
	return 0;
}
