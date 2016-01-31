#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
//long long v=1000000000;
bool sieve[1000000000];int limit = 1000000000;
int main ()
{
    int test,test2;
    int p,i=0,i1,i2;
	cin>>test;
	test2=test;
	int a[test],b[test],max=0;
	while(test--)
	{
	    scanf("%d%d",&a[i],&b[i]);
	    if(max<b[i])
	       max=b[i];
		i++;
	}	
	long long n;
	limit=max;
	//0000;
	//double alp = ceil(sqrt(limit));
	int root=sqrt(limit);
	root++;//alp;
	//={0};
	int primes[(limit/2)+1];
	int insert = 2;
	primes[0] = 2;
	primes[1] = 3;
//	for (int z = 0; z < limit; z++) 
//	       sieve[z] = false; //Not all compilers have false as the default boolean value
	for (int x = 1; x <= root; x++)
	{
		for (int y = 1; y <= root; y++)
		{
			//Main part of Sieve of Atkin
			n = (4*x*x)+(y*y);
			if (n <= limit && (n % 12 == 1 || n % 12 == 5)) sieve[n] ^= true;
			n = (3*x*x)+(y*y);
			if (n <= limit && n % 12 == 7) sieve[n] ^= true;
			n = (3*x*x)-(y*y);
			if (x > y && n <= limit && n % 12 == 11) sieve[n] ^= true;
		}
	}
	//Mark all multiples of squares as non-prime
	for (int r = 5; r <= root; r++) 
	  if (sieve[r])
	      for ( i = r*r; i < limit; i += r*r)
		             sieve[i] = false;
	//Add into prime array
    
	for (int a = 5; a < limit; a++)
	{
		if (sieve[a])
		{
			primes[insert] = a;
			insert++;
		}
	}
	//	int primes[(limit/2)+1];
    i=0;p=0;
	while(test2--)
	{   for ( p = 0; p < insert; p++) 
	      if( primes[p]>=a[i] )
		          {i1=p;break;}
		          for ( p = 0; p < insert; p++) 
		  if(primes[p]>b[i])
		        {i2=p;break;}
		   for ( p = i1; p < i2; p++)      
		            printf("%d\n",primes[p]);//cout<<primes[p]<<\n;
       i++;
        printf("\n");
	}
	return 0;
}
