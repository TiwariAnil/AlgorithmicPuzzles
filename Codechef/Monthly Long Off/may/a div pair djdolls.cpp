#include <iostream>
#include <stdint.h>
#include <stdio.h>
 
using namespace::std;
 
main()
{
	int T;
	scanf("%d", &T);
 
	for (int t = 0; t < T; t++)
	{
		int N, M;
		scanf("%d", &N);
		scanf("%d", &M);
 
		int k = N / M;
		int r = N % M;
 
		int d = 0;
		if (M % 2 == 0)
			d = N / (M / 2);
		else
			d = N / M;
 
		uint64_t ans = (uint64_t) (N + r) * (uint64_t) k;
 
		int x = 2 * r - M + 1;
		if (x < 0)
			x = 0;
 
		ans += (uint64_t) x;
		ans -= (uint64_t) d;
 
		ans /= 2;
		printf("%llu\n", ans);
	}
}
