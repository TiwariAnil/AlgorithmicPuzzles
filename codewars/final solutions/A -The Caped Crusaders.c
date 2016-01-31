#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define LL long long

LL sigma(LL n)
{
    LL temp;
    temp=n*(n+1);
    temp/=2;
    return temp;
}

int main()
{
    LL n,x,y;
    scanf("%lld %lld %lld",&n,&x,&y);
    LL ans=sigma(n+1);
    printf("%lld\n",ans);
    return 0;
}
