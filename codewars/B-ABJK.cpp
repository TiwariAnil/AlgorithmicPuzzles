#include<vector>
#include<set>
#include<map>
#include<queue>
#include<string>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<sstream>

#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define error(x)                cout << #x << " : " << (x) << endl

using namespace std;
int parent[10006];
int findset(int v)
{
    if (parent[v] != v)
        return parent[v] = findset(parent[v]);
    return v;
}
int unionset(int x, int y)
{
    int a = findset(x), b = findset(y);
    if (a==b) return -1;
    if (a>b)
		swap(a,b);
	parent[b] = a;
    return a;
}
bool p[100000];
vector <int> v[10002];
/*
1
7 5 3
3
1
1
1
1
8
1
1 2
2 3
4 5
3 4
1 7

*/

int main()
{

	int n, m, a, b, point;
	int tazo[10009];
	int x1=100000, t;
	FOR(i,0,x1)
		p[i]=true;
	p[0]=p[1]=true;
	FOR(i,2,sqrt(x1+2))
	{
		if(p[i])
			for(int j=2; i*j<=x1; j++)
				p[i*j]=false;
	}

	cin>>t;
	while(t--)
	{
		cin>>n>>m>>point;
		FOR(i,0,n+1)
		{
			parent[i]=i;
			v[i].clear();
		}
		FOR(i,1,n+1)
		{
			cin>>tazo[i];
		}
		FOR(i,0,m)
		{
			cin>>a>>b;
			int x=findset(a), y=findset(b);
			if(x!=y)
			{
				unionset(a,b);
			}
		}
		FOR(i,1,n+1)
		{
			v[parent[i]].push_back(tazo[i]);
		}
		int sum=0, ans=0;
		FOR(i,1,n+1)
		{
			sum=0;
			if(v[i].size()>0)
			{
				FOR(j,0,v[i].size())
					sum+=v[i][j];
			}

			if(p[sum+point] && sum!=0)
				ans++;
		}
		cout<<ans<<endl;
	}
    return 0;
}
