#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

#define MAXN  100000000  /* maximum value of N */ //5761455
#define P1    1562501    /* = ceil(MAXN/64) */
#define P2    50000000   /* = ceil(MAXN/2) */
#define P3    5000     
uint32_t sieve[P1];
 
#define GET(b) ((sieve[(b)>>5]>>((b)&31))&1)
 
void make()
{
    uint32_t i, j, k;
    memset(sieve, 0, sizeof(sieve));
    for (k = 1; k <= P3; k++)
        if (GET(k)==0)
            for(j=2*k+1,i=2*k*(k+1);i<P2;i+=j) 
               sieve[i>>5]|= 1<<(i&31);
}
 
int isprime(int p) 
{
     return p==2 || (p>2 && (p&1)==1 && (GET((p-1)>>1)==0)); 
}
 main()
{
    long i,p,q,count=0;
    int test;
    make();
    scanf("%d", & test);
    while(test--)
      {
         scanf("%ld", & p);
         scanf("%ld", & q); 
     
        for(long i = p ; i <= q; i++)
	      if (isprime(i)) 
            printf("%d\n", i);
        printf("\n");
	  }
 
}
