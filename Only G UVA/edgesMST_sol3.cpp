#include<stdio.h>
#include<algorithm>
using namespace std;

struct fe
{
	int b,lib;
	fe *next,*fan;
}g[1000001];
int elen;
void ins(int a,int b,int lib)
{
	g[elen]=(fe){b,lib,g[a].next,g+elen+1};
	g[a].next=g+elen++;
	g[elen]=(fe){a,lib,g[b].next,g+elen-1};
	g[b].next=g+elen++;
}

int ntime,dfn[500001],low[500001];
int ans[500001];
void tarjan(int i,fe *fa)
{
	low[i]=dfn[i]=++ntime;
	for(fe *j=g[i].next;j;j=j->next)
		if(!dfn[j->b])
		{
			tarjan(j->b,j);
			if(low[j->b]<low[i])
				low[i]=low[j->b];
			if(low[j->b]>dfn[i])
				ans[j->lib]=0;
		}
		else
			if(j->fan!=fa&&dfn[j->b]<low[i])
				low[i]=dfn[j->b];
}

int bcj[500001];
int getfa(int a)
{
	return bcj[a]==a?a:bcj[a]=getfa(bcj[a]);
}

struct fd
{
	int a,b,v,lib;
	friend bool operator < (fd a,fd b)
	{
		return a.v<b.v;
	}
}data[500001];
int main()
{
	int n,m,i,j,k;
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	scanf("%d%d",&n,&m);
	for(i=0;i<m;++i)
	{
		scanf("%d%d%d",&data[i].a,&data[i].b,&data[i].v);
		data[i].lib=i;
		ans[i]=2;
	}
	sort(data,data+m);
	for(i=1;i<=n;++i)
		bcj[i]=i;

	for(i=0;i<m;++i)
	{
		if(!i||data[i].v!=data[i-1].v)
		{
			elen=n+1;
			for(j=i;j<m&&data[j].v==data[i].v;++j)
			{
				int fa=getfa(data[j].a),fb=getfa(data[j].b);
				g[fa].next=NULL;
				dfn[fa]=low[fa]=0;
				g[fb].next=NULL;
				dfn[fb]=low[fb]=0;
			}
			for(k=i;k<j;++k)
			{
				int fa=getfa(data[k].a),fb=getfa(data[k].b);
				if(fa!=fb)
				{
					ans[data[k].lib]=1;
					ins(fa,fb,data[k].lib);
				}
			}
			for(k=i;k<j;++k)
			{
				int fa=getfa(data[k].a),fb=getfa(data[k].b);
				if(!dfn[fa])
					tarjan(fa,NULL);
				if(!dfn[fb])
					tarjan(fb,NULL);
			}
		}
		if(getfa(data[i].a)!=getfa(data[i].b))
			bcj[getfa(data[i].a)]=getfa(data[i].b);
	}
	for(i=0;i<m;++i)
		if(ans[i]==0)
			printf("any\n");
		else
			if(ans[i]==1)
				printf("at least one\n");
			else
				if(ans[i]==2)
					printf("none\n");
	return 0;
}
