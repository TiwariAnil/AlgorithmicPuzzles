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


int parent[5002];
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
/*
5 4
1 2
2 3
2 4
2 5



4 5
1 2
2 3
3 4
4 1
3 1

6 6
1 2
2 3
3 4
4 5
3 6
5 6












*/
int main()
{

	int n, m, a, b;
	cin>>n>>m;
	FOR(i,0,n+1)
	{
		parent[i]=i;
	}
	int flag=0;
	FOR(i,0,m)
	{
		cin>>a>>b;
		int x=findset(a), y=findset(b);
		if(x==y)
		{
			flag=1;
		}
		unionset(a,b);
	}
	if(flag==0)
		cout<<"not corrupt";
	else
		cout<<"corrupt";
    return 0;
}
