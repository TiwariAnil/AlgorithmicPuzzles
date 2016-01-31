#include<stdio.h>
int main()
{
	int t,n,i,j,k,x,y;
	long long int ans;
	scanf("%d %d %d",&n,&x,&y);
	
	ans=((long long int)(n+1)*(n+2))/2;
	printf("%lld\n",ans);
	
	return 0;
}

