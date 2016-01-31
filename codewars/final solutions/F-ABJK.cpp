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

int cnt=0;
int n, a, b, m;
vector <int> v[10002], ans;//, py[10009];
int pool[10003];
int exclude;
int bfs(int x)
{

	if(v[x].size()!=0)
	{
		FOR(i,0,v[x].size())
		{
			if(v[x][i]!=exclude && pool[v[x][i]]==0)
			{
				cnt++;
				pool[v[x][i]]=1;
				bfs(v[x][i]);
			}
		}
	}
	return 1;
}

int main()
{

	cin>>n>>m;
	FOR(i,0,m)
	{
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	FOR(i,1,n+1)
	{
		memset(pool, 0, sizeof(pool));
		cnt=0;
		exclude=i;
		if(i==1)
			bfs(i+1);
		else
			bfs(1);
		if(cnt!=n-1)
			ans.push_back(i);
	}
	cout<<ans.size()<<endl;
	FOR(i,0,ans.size())
	{
		cout<<ans[i]<<" ";
	}
    return 0;
}
