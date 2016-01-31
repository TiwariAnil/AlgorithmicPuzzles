#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define LL long long
int B[10001];

void Union(int a,int b)
{
	int x,y;
	x=find(a);
	y=find(b);
	B[x]=y;
}

int find(int x)
{
	if(B[x]==x) return x;
	return find(B[x]);
}


int main()
{
    int N,M,flag;
    int i,j,k;
    scanf("%d %d",&N,&M);

    for(i=0;i<=N;i++)
    {
        B[i]=i;
    }
    int a[5001],b[5001];
    flag=1;
    for(i=0;i<M;i++)
    {
       scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<M;i++)
    {
        if(find(a[i])!=find(b[i]))
            Union(a[i],b[i]);

        else
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
        printf("not corrupt\n");
    else
        printf("corrupt\n");
    return 0;
}
