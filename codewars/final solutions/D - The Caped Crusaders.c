#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include<math.h>
#define LL long long
#define mod 1000000007

LL power(LL x,LL m)
{
	if(m==0) return 1;
	if(m==1) return x;
	LL ans=1,i,q,r,l;
	while(1)
	{
		r=m%2;
		q=m/2;
		if(r==1)
		{
			ans%=mod;
			l=(ans*x)%mod;
			ans=l;
		}
		if(q==0) break;
		m=q;
		x%=mod;
		x*=x;
		x%=mod;
	}
	ans%=mod;
	return ans;
}

int main()
{
    int t;
//    printf("%ld\n",power(2,4));
    scanf("%d",&t);
    while(t--)
    {
        LL ans=0,n,cnt,temp,powr;
        scanf("%lld",&n);
        cnt=0;
        if(n==1) { printf("2\n"); continue;}
        if(n==2) { printf("5\n"); continue;}
        powr=2;
        cnt=1;
        ans=power(2,n);
        powr=2;
        while((n-powr)>=0 )
        {
            temp=power(2,(n-powr));
            temp%=mod;

            temp*=(n-cnt);
            temp%=mod;

            ans+=temp;
            cnt++;
            powr+=2;
        }
        if(ans%2==0 && n%2==0) ans--;
        printf("%lld\n",ans);
    }
    return 0;
}
