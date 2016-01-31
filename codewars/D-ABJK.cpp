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

#define mod 1000000007

using namespace std;
/*
12
1
2
3
4
5
6
7
8
100000
333333
1000000
999999










*/

int main()
{

	int t, n;
	cin>>t;
	long long ans=0;
	while(t--)
	{
		cin>>n;
		long long a=2, b=5;
		if(n==1)
		{
			cout<<a<<endl;
			continue;
		}
		if(n==2)
		{
			cout<<b<<endl;
			continue;
		}
		FOR(i,3,n+1)
		{
			ans=(2*b+a)%mod;
			a=b;
			b=ans;
		}
		cout<<ans<<endl;
	}
    return 0;
}
