
#include<stdio.h>
#include <iostream>
using namespace std;

#define MAX 151002
#define LMT 388
#define LEN 100000001
//#define RNG 100032

unsigned base[MAX/64], primes[LEN];
int maxn;
#define sq(x) ((x)*(x))
#define mset(x,v) memset(x,v,sizeof(x))
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

//int count=0;
/* Generates all the necessary prime numbers and marks them in base[]*/
int sieve()
{
    unsigned i, j, k;
    int count=0;
    for(i=3; i<LMT && count!=maxn+1; i+=2)
        if(!chkC(base, i))
            for(j=i*i, k=i<<1; j<MAX; j+=k)
                setC(base, j),count++;
	count=0;
    for(i=3, j=0; i<MAX && count!=maxn+1; i+=2)
        if(!chkC(base, i))
            primes[j++] = i,count++;
}

int main () 
{
	int t;
	scanf("%d",&t);
	int a[100000];
	int max=-1;
	for (int i=0;i<t;i++)
	{
		int getin;
    	scanf("%d",&a[i]);
		if(a[i]>maxn)
			maxn=a[i];//input.push_back(MP(getin,MP(0,i)));
	}
	sieve();
	primes[1]=1;primes[2]=2;primes[3]=3;
	for(int i=1;i<t;i++)
		printf("%d\n",2*primes[a[i]]);	
		
	return 0;
}  
