#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int B[10001];

int prime(int n)
{
    if(n==1 || n==0) return 0;
    if(n%2==0 || n%3==0) return 0;
    int i;
    for(i=5;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

void Union(int a,int b)
{
	int x,y;
	x=find(a);
	y=find(b);
	B[x]=y;
}

int find(int x)
{
	if(B[x]==x)
		return x;
	return find(B[x]);
}


int main()
{
    int A[10001];

    int t,M,N,X,Y,P,a,b;
    int m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&N,&M,&P);
        int i,j;
        for(i=0;i<=N;i++)
            B[i]=i;

        for(i=1;i<=N;i++)
            scanf("%d",&A[i]);

        for(i=1;i<=M;i++)
        {
            scanf("%d %d",&a,&b);
            Union(a,b);
        }
        a=0;b=0;
        int cnt=0;
        for(i=1;i<=N;i++)
        {
            m=0;
            if(A[i]==0)
                continue;
            for(j=i;j<=N;j++)
            {
                if(find(i)==find(j))
                    {
                        m+=A[j];
                        A[j]=0;
                    }
            }

            m+=P;

            if(prime(m)==1)
            {
                cnt++;
            }
        }
    printf("%d\n",cnt);
    }
    return 0;
}
