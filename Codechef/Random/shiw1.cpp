#include<string>
//Other Includes
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<sstream>
//some common functionn
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
// Input macros
#define s(n)                        scanf("%d",&n)
#define error(x)                cout << #x << " : " << (x) << endl

using namespace std;

int n, m ;
unsigned long long ans=0;
int a[1000009];
long sum[1000009];
int abc[12345678]={0};

bool input()
{
	// 1 -1 1 -1 1
	s(n);
	sum[0]=0;
	a[0]=0;
	FOR(i,1,n+1)
	{
		s(a[i]);
		sum[i]=sum[i-1]+a[i];
	}
	FOR(i,1,n+1)
	{
		FOR(j,0,i)
		{
			error(i);
			error(j);
			error("----");
			if(sum[i]-sum[j]==1 || sum[i]-sum[j]==-1)
				ans+=i-j;
		}
	}
	cout<<ans;
	return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int T=1;
    //s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        //solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}
